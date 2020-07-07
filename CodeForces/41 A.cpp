#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, t;
    int n = 0;

    cin >> s >> t;

    if(s.length() == t.length())
    {
        int l = s.length();
        for(int i=0, j=l-1; i<l; i++, j--)
        {
            if(s[i] != t[j])
            {
                n = 1 ;
                cout << "NO\n";
                break;
            }
        }
    }
    else
    {
        cout << "NO\n";
        n = 1;
    }

    if(n == 0)
    {
        cout << "YES\n";
    }


    return 0;
}
