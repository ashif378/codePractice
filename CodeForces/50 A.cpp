#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n, mini, maxx, total=0;

    cin >> m >> n;

    if(m > n)
    {
        mini = n;
        maxx = m;
    }
    else
    {
        mini = m;
        maxx = n;
    }

    if(mini%2 != 0)
    {
        total += (maxx/2);
    }

    mini = mini/2;

    total += mini*maxx;

    cout << total;

    return 0;
}
