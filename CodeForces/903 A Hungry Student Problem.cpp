#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, flag;

    cin  >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;
        a = 0;
        flag = 0;

        if(n%3 == 0 || n%7 == 0)
        {
            flag = 1;
        }
        else
        {
            a = n%3;
            if(a%7 == 0)
            {
                flag = 1;
            }

            if(flag == 0)
            {
                a = n%7;
                if(a%3 == 0)
                {
                    flag = 1;
                }
            }
        }

        if(flag == 1)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
