#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, l, l1;
    string s;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> s;

        l = s.length();

        if(l > 10)
        {
            l1 = l-2;
            cout << s[0] << l1 << s[l-1] << endl;
        }
        else
        {
            cout << s << endl;
        }

    }

    return 0;
}
