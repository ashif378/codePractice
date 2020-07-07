#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char m;
    int a[10] = {0};

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> m;

        if(m == 'L')
        {
            for(int j=0; j<10; j++)
            {
                if(a[j] == 0)
                {
                    a[j] = 1;
                    break;
                }
            }
        }
        else if(m == 'R')
        {
            for(int j=9; j>=0; j--)
            {
                if(a[j] == 0)
                {
                    a[j] = 1;
                    break;
                }
            }
        }
        else if(m >= '0' && m <= '9')
        {
            int x = m - 48;
            a[x] = 0;
        }

    }

    for(int i=0; i<10; i++)
    {
        cout << a[i];
    }


    return 0;
}
