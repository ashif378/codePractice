#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i, j, z;
    list <int> p;
    char *c;
    cin >> n >> k;
    c = new char [n];
    for(i=0; i<n; i++)
    {
        cin >> c[i];
    }

    z = (sizeof(c) / sizeof(c[0]));
    sort(c, c+z);

    for(i=0; i<n; i++)
    {
        cout << c[i] ;
    }





    return 0;
}
