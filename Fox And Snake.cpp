#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, m, n, z=0;

    cin >> n >> m;

    for(i=0; i<n; i++)
    {
        if(i%2 == 0)
        {
            for(j=0; j<m; j++)
            {
                cout << "#";
            }
            cout << "\n";
        }
        else
        {
            if(z == 0)
            {
                for(j=0; j<m-1; j++)
                {
                    cout << ".";
                }
                cout << "#\n";
                z = 1;
            }
            else
            {
                cout << "#";
                for(j=0; j<m-1; j++)
                {
                    cout << ".";
                }
                cout << "\n";
                z = 0;
            }
        }
    }

    return 0;
}
