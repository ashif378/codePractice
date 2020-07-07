#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, m, n, x, y;

    while(scanf("%d %d", &a, &b) != EOF)
    {
        x = a;
        y = b;
        m = 1;
        n = 1;

        for( ; ; )
        {

            if(a == 1 && b == 1)
            {
                break;
            }

            if(a > 1)
            {
                m++;
                if(a%2 == 1)
                {
                    a = (3*a) + 1;
                }
                else
                {
                    a = a/2;
                }
            }

            if(b > 1)
            {
                n++;
                if(b%2 == 1)
                {
                    b = (3*b) + 1;
                }
                else
                {
                    b = b/2;
                }
            }
        }
        cout << x << ' ' << y << ' ' << (m>n ? m : n) << m << ' ' << n <<  endl;
    }

    return 0;
}
