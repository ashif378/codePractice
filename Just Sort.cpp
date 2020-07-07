#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, even[101], odd[101], e, o, t;

    cin >> t;
        e = 0;
        o = 0;
        for(int i=0; i<t; i++)
        {
            cin >> n;
            if(n%2 == 0)
            {
                even[e] = n;
                e++;
            }
            else
            {
                odd[o] = n;
                o++;
            }
        }

        sort(even, even+e);
        sort(odd, odd+o, greater<int>());

        for(int i=0; i<e; i++)
        {
            cout << even[i] << ' ';
        }
        for(int i=0; i<o; i++)
        {
            cout << odd[i] << ' ';
        }
        cout << endl;

    return 0;
}
