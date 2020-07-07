#include <iostream>
#include <cstdio>

using namespace std;

#define INF 9999
#define V 4

void print(int G[][V]);
void FloydWarShall(int G[][V]);

void FloydWarShall(int graph[][V])
{
    int dist[V][V], i, j, k;

    for(i=0; i<V; i++)
    {
        for(j=0; j<V; j++)
        {
            dist[i][j] = graph[i][j];
        }
    }

    for(k=0; k<V; k++)
    {
        for(i=0; i<V; i++)
        {
            for(j=0; j<V; j++)
            {
                if(dist[i][j] > dist[i][k] + dist[k][j])
                dist[i][j] = dist[i][k] + dist[k][j];
            }
        }
    }

    print(dist);
}


void print(int G[][V])
{
    for(int m=0; m<V; m++)
    {
        for(int n=0; n<V; n++)
        {
            if(G[m][n] == INF)
                cout << "INF" << "\t";
            else
                cout << G[m][n] << "\t";
        }
        cout << endl;
    }
}


int main()
{
    int i, j, k;
    //int graph[V][V];

    /*for(i=0; i<V; i++)
    {
        for(j=0; j<V; j++)
        {
            cin >> graph[i][j];
        }
    }*/

    int graph[V][V] = { {0,   5,  INF, 10},
                        {INF, 0,   3, INF},
                        {INF, INF, 0,   1},
                        {INF, INF, INF, 0}
                      };

    FloydWarShall(graph);


    return 0;
}
