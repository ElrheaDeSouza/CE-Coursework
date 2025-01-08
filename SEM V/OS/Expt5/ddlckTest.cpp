#include <iostream>

using namespace std;

int n, m, i, j, p[10], alloc[10][10], req[10][10], avail[10], work[10], finish[10], sequence[10], check1, check2;

void input()
{
    cout<<"Number of processes: ";
    cin>>n;
    cout<<"Number of resources: ";
    cin>>m;

    for(i=1;i<=n;i++)
    {
        cout<<"\nProcess number: ";
        cin>>p[i];

        cout<<"Process "<<i<<" allocation: ";
        for(j=1;j<=m;j++)
        {
            cin>>alloc[i][j];
        }

        cout<<"Process "<<i<<" request: ";
        for(j=1;j<=m;j++)
        {
        cin>>req[i][j];
        }
    }
    cout<<"\nEnter Available: ";
    for(j=1;j<=m;j++)
    {
        cin>>avail[j];
    }
}

void display()
{
    cout<<"\n\nProc\tAlloc\tReq\n";
    for(i=1;i<=n;i++)
    {
        cout<<"P"<<p[i]<<"\t";
        for(j=1;j<=m;j++)
        {
            cout<<alloc[i][j];
        }
        cout<<"\t";

        for(j=1;j<=m;j++)
        {
            cout<<req[i][j];
        }
        cout<<endl;
    }
}

int safeSequence()
{
    int count=0, iteration=0;
    for(i=1;i<=n;i++)
    {
        finish[i] = 0;
    }

    for(j=1;j<=m;j++)
    {
        work[j]=avail[j];
    }

    while(iteration<n)
    {
        for(i=1;i<=n;i++)
        {
            if(!finish[i])
            {
                check1 = 1;
                for(j=1;j<=m;j++)
                {
                    if(req[i][j]>work[j])
                    {
                        check1=0;
                        break;
                    }
                }
                if(check1)
                {
                    finish[i]=1;
                    for(j=1;j<=m;j++)
                    {
                        work[j]+=alloc[i][j];
                    }
                    count++;
                    sequence[count] = p[i];
                }
            }
        }
        iteration++;
    }

    for(i=1;i<=n;i++)
    {
        if(finish[i]==0)
        {
            return 0;
        }
    }

    return 1;
}

int resReq()
{
    int preq;
    cout<<"\nEnter process number requesting resource: ";
    cin>>preq;
    cout<<"Enter new request request vector: \n";
    for(j=1;j<=m;j++)
    {
        cin>>req[preq][j];
    }

    return safeSequence();
}

int main()
{
    input();
    display();
    if(safeSequence())
    {
        cout<<"\nSafe sequence exists.";
        cout<<"\nSafe sequence: ";
        for(i=1;i<=n;i++)
        {
            cout<<"P"<<sequence[i]<<" ";
        }
    }
    else
    {
        cout<<"\nDEADLOCK: No safe sequence.";
    }

    int c = resReq();

    switch(c)
    {
    case 0: cout<<"\nSystem is in deadlock."; break;
    case 1: cout<<"\nSafe sequence: ";
        for(i=1;i<=n;i++)
        {
            cout<<"P"<<sequence[i]<<" ";
        }
        break;
    default: cout<<"\nInvalid input.";
    }
}
