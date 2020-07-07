#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, n, r, b;
    int len=0, t;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> a;
        b=0;
        len = 0;
        n = a;
        while(n > 0)
        {
            r = n%10;
            n=n/10;
            len++;
        }
        n=a;
        while(n > 0)
        {
            r = n%10;
            b += pow(r, len);
            n=n/10;
        }

        if(a == b)
        {
            cout << "Armstrong\n";
        }
        else
        {
            cout << "Not Armstrong\n";
        }
    }
    return 0;
}
