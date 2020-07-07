#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, l[1010], flag = 0, s=0;

    cin >> n >> m;

    for(int i=0; i<n; i++)
    {
        cin >> l[i];
        if(l[i] >= m)
        {
            s += m;
        }
        else
        {
            flag = 1;
        }
    }

    if(flag == 1)
    {
        cout << "NO\n";
    }
    else
    {
        if(s == 60)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }


    return 0;
}
