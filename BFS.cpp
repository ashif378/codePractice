#include <iostream>
#include <list>

using namespace std;

class graph
{
    int V; //no. of vertices
    list <int> *adj; //pointer to an array adjacency
public:
    graph(int V); //constructor
    void addEdge(int v, int w); //function to add an edge to graph
    void BFS(int s); //prints BFS traversal from a given source s
};

graph :: graph(int V)
{
    this -> V = V;
    adj = new list <int> [V];
}

void graph :: addEdge(int v, int w)
{
    adj[v].push_back(w); //Add w to v's list
}

void graph :: BFS(int s)
{
    bool *visited = new bool[V];
    cout << "\n* " << V << " *\n";
    for(int i=0; i<V; i++)
    {
        visited[i] = false;
        cout << visited[i] << ' ';
    }

    list <int> queu;

    visited[s] = true;
    queu.push_back(s);

    list <int> :: iterator i;

    while(!queu.empty())
    {
        s = queu.front();
        cout << s << " ";
        queu.pop_front();

        for(i = adj[s].begin() ; i != adj[s].end() ; ++i)
        {
            cout << "\n adj begin:  " << *i << "  ";
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
    graph g(6);

    g.addEdge(0, 1);
    g.addEdge(0, 3);
    g.addEdge(0, 4);
    g.addEdge(1, 0);
    g.addEdge(1, 2);
    g.addEdge(2, 1);
    g.addEdge(3, 0);
    g.addEdge(3, 5);
    g.addEdge(4, 0);
    g.addEdge(4, 5);
    g.addEdge(5, 3);
    g.addEdge(5, 4);

    cout << "Following is Breadth First Traversal "
         << "(starting from vertex 5) \n";

    g.BFS(5);


    return 0;
}
