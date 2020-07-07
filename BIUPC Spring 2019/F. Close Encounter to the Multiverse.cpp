#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, a, r, p;

    cin >> t;

    for(i=0; i<t; i++)
    {
        cin >> a;
        p = 0;
        while(a)
        {
            r = a%10;
            a = a/10;
            if(r == 3 || r == 7)
            {
                cout << "Danger\n";
                p++;
                break;
            }
        }
        if(p == 0)
        {
            cout << "Welcome\n";
        }


    }


    return 0;
}
