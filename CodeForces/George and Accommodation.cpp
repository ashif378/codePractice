#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, *p, *q, i, cnt=0;

    cin >> n;

    p = new int [n];
    q = new int [n];

    for(i=0; i<n; i++)
    {
        cin >> p[i] >> q[i];
    }

    for(i=0; i<n; i++)
    {
        if(q[i] - p[i] >= 2)
        {
            cnt++;
        }
    }

    cout << cnt;

    return 0;
}
