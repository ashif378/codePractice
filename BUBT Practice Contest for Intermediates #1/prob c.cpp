#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, ar[101], error=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> ar[i];
    }

    int a, b, c;
    a = 1;
    b = 1;
    c = 0;
    for(int i=0; i<n; i++)
    {
        if(a==1 && b==1)
        {
            if(ar[i] == 1)
            {
                b = 0;
                c =1;
            }
            else if(ar[2] == 2)
            {
                a = 0;
                c = 1;
            }
            else
            {
                error++;
                break;
            }
        }
        else if(a==1 && c==1)
        {
            if(ar[i] == 1)
            {
                c=0; b=1;
            }
            else if(ar[i] == 3)
            {
                a=0;b=1;
            }
            else
            {
                error++;
                break;
            }
        }
        else if(b==1 && c==1)
        {
            if(ar[i] == 2)
            {
                c=0; a=1;
            }
            else if(ar[i] == 3)
            {
                a=1;b=0;
            }
            else
            {
                error++;
                break;
            }
        }
    }

    if(error == 0 )
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
