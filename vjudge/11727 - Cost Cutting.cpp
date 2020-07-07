#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, a, b, c, d;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c ;

        if(a > b)
        {
            if(a > c)
            {
                if(b>c)
                {
                    d = b;
                }
                else
                {
                    d = c;
                }
            }
        }
        if(b > a)
        {
            if(b > c)
            {
                if(a > c)
                {
                    d = a;
                }
                else
                {
                    d = c;
                }
            }
        }
        if(c > a)
        {
            if(c > b)
            {
                if(a > b)
                {
                    d = a;
                }
                else
                {
                    d = b;
                }
            }
        }
        cout << "Case " << i+1 << ": " << d << endl;
    }

    return 0;
}
