#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, *a, *b, z, f=0, g=0;

    cin >> m;
    a = new int [m];
    for(int i=0 ; i<m; i++)
    {
        cin >> a[i];
    }

    cin >> n;
    b = new int [n];
    for(int i=0 ; i<n; i++)
    {
        cin >> b[i];
    }

    z = sizeof(a)/sizeof(a[0]);
    sort(a, a+z);

    z = sizeof(b)/sizeof(b[0]);
    sort(b, b+z);

    int o = m-1;
    int p = n-1;


    int *k;
    k = new int [m+n];

    int i, j, o=m-1, p=n-1;

    for(i=0; i<m; i++)
    {
        k[i] = a[i];
    }

    for(i, j=0; j<n; i++, j++)
    {
        k[i] = b[j];
    }

    for(i=0; i<m+n; i++)
    {
        if(a[o]+b[p] == k[i])
        {

        }
    }




    return 0;
}
