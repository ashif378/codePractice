#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, k, i, f=0;
    char s[200001];

    cin >> n >> k;

    if(n == 1 && k ==1)
    {
        cin >> i;
        cout << 0 << endl;
        f=1;
    }
    else if(k == 0)
    {
        for(i=0; i<n; i++)
        {
            cin >> s[i];
        }

        for(i=0; i<n; i++)
        {
            cout << s[i];
        }
        f=1;
        cout << endl;
    }
    else
    {
        for(i=0; i<n; i++)
        {
            cin >> s[i];

            if(i==0)
            {
                if(s[0] != '1')
                {
                    s[i] = '1';
                    k--;
                }
            }
            else
            {
                if(k>0 && s[i] != '0')
                {
                    s[i]='0';
                    k--;
                }
            }
        }
    }



    if(f == 0)
    {
        for(i=0; i<n; i++)
        {
            cout << s[i];
        }
        cout << endl;
    }


    return 0;
}
