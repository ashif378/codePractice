#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, m, n, *l, *r, z;
    int *p;
    cin >> n >> m;

    l = new int [m];
    m = new int [m];
    p = new int [2*m];

    for(i=0, j=0; i<m; i++, j++)
    {
        cin >> l[i] >> m[i];
        p[j] = l[i];
        p[j+1] = m[i];
    }

    z = sizeof(p) / sizeof(p[0]);
    sort(p, p+1);

    for(i=n; i<=m ; i++)
    {
        if()
    }







}
