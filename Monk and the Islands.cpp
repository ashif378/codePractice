#include <iostream>
#include <list>

using namespace std;

int level[10]= {0};

class graph
{
    int V;
    list <int> *adj;
public:
    graph(int V);
    void add_edge(int v, int w);
    void BFS(int s, int M);
};

graph :: graph (int V)
{
    this -> V = V;
    adj = new list <int> [V];
}

void graph :: add_edge(int v, int w)
{
    adj[v].push_back(w);
    adj[w].push_back(v);
}

void graph :: BFS(int s, int M)
{
    int cnt = 0;
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
        //cout << s << ' ';
        queu.pop_front();

        for(i = adj[s].begin() ; i != adj[s].end() ; i++)
        {
            if(!visited[*i])
            {
                visited[*i] = true;
                level[*i] = level[s] + 1 ;
                queu.push_back(*i);
            }
        }
    }
    cout << "\n" << level[M] << endl;
}

int main()
{
    int T, m, n, x, y;

    cin >> T;

    for(int j=0; j<T; j++)
    {
        cin >> m >> n;
        graph g(m+1);
        for(int t = 0; t<n; t++)
        {
            cin >> x >> y;
            g.add_edge(x, y);
        }
        g.BFS(1, m);
    }


    return 0;
}
