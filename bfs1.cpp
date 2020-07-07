#include <iostream>
#include <list>

using namespace std;

class graph
{
    int V;
    list <int> *adj;
public:
    graph(int V);
    void addEdge(int v, int w);
    void BFS(int s);
};

graph :: graph(int V)
{
    this -> V = V;
    adj = new list <int> [V];
}

void graph :: addEdge(int v, int w)
{
    adj[v].push_back(w);
}

void graph :: BFS(int s)
{
    bool *visited = new bool [V];
    for(int i=0; i<V; i++)
    {
        visited[i] = false;
    }

    list <int> queu;

    visited[s] = true;
    queu.push_back(s);

    list <int> :: iterator i;

    while(!queu.empty())
    {
        s = queu.front();
        //cout << s << " ";
        queu.pop_front();
        cout << s << " ";


        for(i = adj[s].begin() ; i != adj[s].end() ; i++)
        {
            if(!visited[*i])
            {
            visited[*i] = true;
            queu.push_back(*i);
            }
        }
    }
}




int main()
{
    graph g(7);

    g.addEdge(1, 0);
    g.addEdge(0, 4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(2, 6);
    g.addEdge(2, 5);
    g.addEdge(2, 0);
    g.addEdge(4, 0);
    g.addEdge(4, 3);
    g.addEdge(3, 4);
    g.addEdge(5, 2);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 5) \n";

    g.BFS(5);



    return 0;
}
