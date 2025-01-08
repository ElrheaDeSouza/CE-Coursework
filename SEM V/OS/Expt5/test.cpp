#include <iostream>
#define SIZE 10
using namespace std;

int n, m;
int count = 0, isSafe = 1, canGrant, WORK[SIZE], FINISH[SIZE], sequence[SIZE];
int MAX[SIZE][SIZE], ALLOC[SIZE][SIZE], AVAIL[SIZE], NEED[SIZE][SIZE];

void safe_sequence() {
    count = 0;
    isSafe = 1;

    for(int i = 0; i < m; i++) WORK[i] = AVAIL[i];
    for(int i = 0; i < n; i++) FINISH[i] = 0;

    for(int k = 0; k < n; k++) {
        for(int i = 0; i < n; i++) {
            if(FINISH[i]) continue;

            canGrant = 1;
            for(int j = 0; j < m; j++) {
                if(NEED[i][j] > WORK[j]) {
                    canGrant = 0;
                    break;
                }
            }
            if(canGrant) {
                for(int j = 0; j < m; j++) {
                    WORK[j] += ALLOC[i][j];
                }
                sequence[count++] = i;
                FINISH[i] = 1;
            }
        }
    }

    for(int i = 0; i < n; i++) {
        if(!FINISH[i]) {
            isSafe = 0;
        }
    }

    if(isSafe) {
        cout << "Safe sequence: ";
        for(int i = 0; i < n; i++) {
            cout << " -> P" << sequence[i];
        }
        cout << endl;
    } else {
        cout << "\nNo safe sequence exists!\n";
    }
}

void resource_allocation() {
    int process_id;
    int REQ[SIZE];

    cout << "\n\nEnter requesting process id : "; cin >> process_id;
    cout << "Enter request : ";
    for(int i = 0; i < m; i++) {
        cin >> REQ[i];
    }

    // Check if request can be granted
    int canAllocate = 1;
    for(int i = 0; i < m; i++) {
        if(REQ[i] > NEED[process_id][i] || REQ[i] > AVAIL[i]) {
            canAllocate = 0;
            break;
        }
    }

    if(canAllocate) {
        // Tentatively allocate the requested resources
        for(int i = 0; i < m; i++) {
            AVAIL[i] -= REQ[i];
            ALLOC[process_id][i] += REQ[i];
            NEED[process_id][i] -= REQ[i];
        }

        cout << "\nResources have been tentatively allocated.\n";

        // Check for safe sequence after the allocation
        safe_sequence();

        if(!isSafe) {
            // Rollback the allocation if no safe sequence exists
            cout << "\nRequest cannot be granted due to unsafe state. Rolling back...\n";
            for(int i = 0; i < m; i++) {
                AVAIL[i] += REQ[i];
                ALLOC[process_id][i] -= REQ[i];
                NEED[process_id][i] += REQ[i];
            }
        } else {
            cout << "\nRequest granted successfully.\n";
        }

    } else {
        cout << "\nResource request cannot be granted immediately!\n";
    }
}

int main() {
    cout << "Enter no. of processes: "; cin >> n;
    cout << "Enter no. of resources: "; cin >> m;

    cout << "Enter available vector: ";
    for(int i = 0; i < m; i++) {
        cin >> AVAIL[i];
    }

    cout << "Enter max matrix: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> MAX[i][j];
        }
    }

    cout << "Enter allocation matrix: ";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> ALLOC[i][j];
        }
    }

    cout << "Need matrix: \n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            NEED[i][j] = MAX[i][j] - ALLOC[i][j];
            cout << NEED[i][j] << " ";
        }
        cout << "\n";
    }

    // Find initial safe sequence
    safe_sequence();

    // Perform resource allocation requests
    resource_allocation();

    return 0;
}
