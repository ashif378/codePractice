#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, n, i, x;
    int a[50] = {0};

    cin >> T;

    for(i=0; i<T; i++)
    {
        cin >> n;

        if(n == 0)
        {
            cout << 0 << ' ' << 0 << endl;
        }
        else if(n == 20)
        {
            cout << 10 << ' ' << 10 << endl;
        }
        else if(n <= 10)
        {
            cout << a[n] << ' ' << abs(n-a[n]) << endl;
            a[n]++;
        }
        else
        {
            x = 10 - a[n];
            cout << x << ' ' << abs(n-x) << endl;
            a[n]++;
        }
    }

    return 0;
}
