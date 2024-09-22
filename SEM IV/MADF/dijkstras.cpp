#include<iostream>
#include<string>
#define INFINITY 9999
using namespace std;

int min_distance(int dist[], bool status[], int n)
{
  int i,  min = INFINITY, value = 0;
  for(i=0; i<n; i++)
  {
    if(dist[i]<min && status[i]!=true)
    {
      min = dist[i];
      value = i;
    }
  }
  return value;
}

void Dijkstra(int source, int n, int cost[100][100])
{
  int i, j;
  int dist[n-1], u;
  bool status[n];
  string path[n];
  for(i=0; i<n; i++)
  {
    dist[i] = INFINITY;
    status[i] = false;
    path[i] = to_string(source);
  }
  dist[source] = 0;
  for(i=0; i<n; i++)
  {
    u = min_distance(dist,status,n);
    status[u] = true;
    for(j=0; j<n; j++)
    {
      if(!status[j] && cost[u][j] && dist[j] > dist[u] + cost[u][j])
      {
        dist[j] = dist[u] + cost[u][j];
        path[j] = path[u] + "->"+to_string(j);
      }
    }
  }

  for(i=0; i<n; i++)
  {
    if(i!=source && dist[i] == INFINITY)
    {
      path[i] = "Does not exist";
    }
  }

  cout<<"Source\t\t"<<"Destination\t\t"<<"   Cost\t\t"<<"Path\t"<<endl;
  for(i=0; i<n; i++)
  {
    cout<<source<<"\t\t"<<i<<"\t\t\t"<<dist[i]<<"\t\t"<<path[i]<<endl;
  }
}

int main()
{
  int cost[100][100], n, i, j, source;
  cout<<"Enter the number of vertices: ";
  cin>>n;
  cout<<"Enter the cost matrix ("<<n<<"x"<<n<<"): \n";
  for(i=0; i<n; i++)
  {
    for(j=0; j<n; j++)
    {
      cin>>cost[i][j];
    }
  }
  cout<<"Enter the source vertex: ";
  cin>>source;
  Dijkstra(source, n, cost);
  return 0;
}
