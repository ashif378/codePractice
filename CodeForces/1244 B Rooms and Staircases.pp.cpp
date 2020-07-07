#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a, b, x;
    char s[1010];
    bool flag;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;
        flag = 0;
        a=0;

        for(int j=0; j<n; j++)
        {
            cin >> s[j];
            if(s[j] == '1')
            {
                flag = 1;
                b = j;
                if(a==0)
                {
                    a=1;
                    x=j;
                }
            }

        }

        if(s[0] == '1' || s[n-1] == '1')
        {
            cout << n*2 << endl;
        }
        else if(flag == 0)
        {
            cout << n << endl;
        }
        else
        {
            if(x == b)
            {
               if(x < (n/2))
               {
                   cout << (n-x)*2 << endl;
               }
               else
               {
                   cout << (x+1)*2 << endl;
               }
            }
            else
            {
                if((n-x) >= (b+1))
                {
                    cout << (n-x)*2 << endl;
                }
                else
                {
                    cout << (b+1)*2 << endl;
                }
            }

        }

    }

    return 0;
}
