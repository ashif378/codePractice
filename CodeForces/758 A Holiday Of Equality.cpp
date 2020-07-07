#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, maxx=0, a[110], s=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a[i];
        if(a[i] > maxx)
        {
            maxx = a[i];
        }
    }

    for(i=0; i<n; i++)
    {
        s += maxx - a[i];
    }

    cout << s << endl;

    return 0;
}
