#include <bits/stdc++.h>

using namespace std;

int main()
{
    int  k, t;
    double x, y, a, b, c, d;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c >> d >> k;

        x = ceil(a/c);
        y = ceil(b/d);

        if(k >= (x+y))
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << "-1" << endl;
        }

    }


    return 0;
}
