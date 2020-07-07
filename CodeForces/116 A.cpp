#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, s=0, m = 0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b;

        s -= a;
        s += b;

        if(s >= m)
            m = s;
    }

    cout << m;

    return 0;
}
