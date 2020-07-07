#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, u, d, a;

    while(cin >> n >> u >> d)
    {
        a = 0;

        if(n == 0)
        {
            cout << endl;
        }
        else
        {
            for( ; ; )
            {
                a++;
                n = n - u;

                if(n <= 0)
                {
                    break;
                }

                a++;
                n = n + d;
            }

            cout << a << endl;
        }

    }


    return 0;
}
