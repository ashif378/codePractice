#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, r;
    bool flag;

    cin >> t;

    while(t--)
    {
        cin >> n;
        flag = 1;
        while(n != 0)
        {
            if(n%10 == 3 || n%10 == 7)
            {
                cout << "Danger\n";
                flag = 0;
                break;
            }
            n = n/10;
        }
        if(flag == 1)
        {
            cout << "Welcome\n";
        }

    }

    return 0;
}
