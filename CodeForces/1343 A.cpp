#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, i, x;

    cin >> t;
    while(t--)
    {
        cin >> n;

        for(i=2; i<n; i++)
        {
            int a = pow(2,i)-1;
            if(n % a == 0)
            {
                 x = n%a;
                break;
            }
        }
        cout << x << endl;
    }



    return 0;
}
