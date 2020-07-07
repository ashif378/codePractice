#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, a, b, c, d;

    cin >> y;

    for( ; ; )
    {
        y++;
        d = y;

        a = d/1000;
        d = d%1000;

        b = d/100;
        d = d%100;

        c = d/10;
        d = d%10;

        if(a != b && a != c && a != d && b != c && b != d && c != d)
            break;

    }

    cout << y;

    return 0;
}
