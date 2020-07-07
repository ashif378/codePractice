#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int x=0, t;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> s;

        if(s[0] == '+' || s[2] == '+')
        {
            x++;
        }
        else if(s[0] == '-' || s[2] == '-')
        {
            x--;
        }
    }

    cout << x << endl;

    return 0;
}
