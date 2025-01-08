#include <iostream>
#define SIZE 10
using namespace std;

int n, m;
int count = 0, isSafe = 1, canGrant, WORK[SIZE], FINISH[SIZE], sequence[SIZE];
int MAX[SIZE][SIZE], ALLOC[SIZE][SIZE], AVAIL[SIZE], NEED[SIZE][SIZE];

// Function to calculate the safe sequence
void safe_sequence() {
    for(int i=0; i<m; i++) WORK[i] = AVAIL[i];
    for(int i=0; i<n; i++) FINISH[i] = 0;

    for(int k=0; k<n; k++) {
        for(int i=0; i<n; i++) {
            if(FINISH[i]) continue;

            canGrant = 1;
            for(int j=0; j<m; j++) {
                if(NEED[i][j] > WORK[j]) {
                    canGrant = 0;
                    break;
                }
            }
            if(canGrant) {
                for(int j=0; j<m; j++) {
                    WORK[j] += ALLOC[i][j];
                }
                sequence[count++] = i;
                FINISH[i] = 1;
            }
        }
    }

    isSafe = 1; // Reset isSafe before checking
    for(int i=0; i<n; i++) {
        if(!FINISH[i]) {
            isSafe = 0; // Mark unsafe if any process is not finished
        }
    }

    if(isSafe) {
        cout << "\nSafe Sequence: ";
        for(int i=0; i<n; i++) {
            cout << " -> P" << sequence[i];
        }
        cout << endl;
    } else {
        cout << "\nNo safe sequence exists!\n";
    }
}

// Function to handle resource allocation requests
void resource_allocation() {
    int process_id;
    int REQ[SIZE];

    cout << "\nEnter requesting process id: ";
    cin >> process_id;

    if (process_id < 0 || process_id >= n) {
        cout << "Invalid process ID!" << endl;
        return;
    }

    cout << "Enter request: ";
    for(int i=0; i<m; i++) {
        cin >> REQ[i];
    }

    int canAllocate = 1;
    for(int i=0; i<m; i++) {
        // Check if the request exceeds the maximum claim or available resources
        if(REQ[i] > NEED[process_id][i] || REQ[i] > AVAIL[i]) {
            canAllocate = 0;
            break;
        }
    }

    if(canAllocate) {
        // Pretend to allocate resources
        for(int i=0; i<m; i++) {
            AVAIL[i] -= REQ[i];
            ALLOC[process_id][i] += REQ[i];
            NEED[process_id][i] -= REQ[i];
        }

        cout << "\nResources can be allocated immediately!\n";

        // Check if the system remains in a safe state after allocation
        safe_sequence();

        // Revert the allocation if it was not safe
        if (!isSafe) {
            for(int i=0; i<m; i++) {
                AVAIL[i] += REQ[i];
                ALLOC[process_id][i] -= REQ[i];
                NEED[process_id][i] += REQ[i];
            }
            cout << "Resources allocation reverted due to unsafe state!" << endl;
        }

    } else {
        cout << "\nResource cannot be allocated immediately!\n";
    }
}

int main() {
    cout << "Enter number of processes: ";
    cin >> n;
    cout << "Enter number of resources: ";
    cin >> m;

    cout << "Enter available vector: ";
    for(int i=0; i<m; i++) {
        cin >> AVAIL[i];
    }

    cout << "Enter max matrix:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> MAX[i][j];
        }
    }

    cout << "Enter allocation matrix:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> ALLOC[i][j];
        }
    }

    // Calculate the need matrix
    cout << "Need matrix:\n";
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            NEED[i][j] = MAX[i][j] - ALLOC[i][j];
            cout << NEED[i][j] << " ";
        }
        cout << "\n";
    }

    safe_sequence(); // Check for the initial safe sequence
    resource_allocation(); // Handle resource request

    return 0;
}
