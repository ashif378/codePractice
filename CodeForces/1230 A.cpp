#include <bits/stdc++.h>

using namespace std;


int main()
{
    int a, b, c, d, f=0;

    cin >> a >> b >> c >> d;

        if((a+b) == (c+d))
        {
            cout << "YES\n";
            f = 1;
        }
        else if((a+c) == (b+d))
        {
            cout << "YES\n";
            f = 1;
        }
        else if((a+d) == (b+c))
        {
            cout << "YES\n";
            f = 1;
        }
        else if((a+b+c) == d)
        {
            cout << "YES\n";
            f = 1;
        }
        else if((a+b+d) == c)
        {
            cout << "YES\n";
            f = 1;
        }
        else if((a+d+c) == b)
        {
            cout << "YES\n";
            f = 1;
        }
        else if((d+b+c) == a)
        {
            cout << "YES\n";
            f = 1;
        }

        if(f == 0)
        {
            cout  << "NO\n";
        }

    return 0;
}
