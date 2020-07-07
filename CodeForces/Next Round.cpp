#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, *a, i, c;
    cin >> n >> k;
    a = new int [n];

    for(i=1; i<=n; i++)
    {
        cin >> a[i];
    }

    c = a[k];

    if(c == 0 )
    {
        for(i=n; i>0; i--)
        {
            if(a[i] > 0)
            {
                cout << i;
                return 0;
            }
        }
    }

    for(i=n; i>0; i--)
    {
        if(a[1] == 0)
        {
            cout << 0;
            break;
        }
        else if(a[i] == c)
        {
            cout << i;
            break;
        }
    }

}
