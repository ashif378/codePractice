#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b, c, n=0;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c;

        if((a+b+c) > 1)
        {
            n++;
        }
    }

    cout << n;

    return 0;
}
