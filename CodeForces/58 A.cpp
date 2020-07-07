#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int l, k=0;
    cin >> s;

    l = s.length();

    for(int i=0; i<l; i++)
    {
        if(k == 0 && s[i] == 'h')
        {
            k++; i++;
        }
        if(k == 1 && s[i] == 'e')
        {
            k++; i++;
        }
        if(k == 2 && s[i] == 'l')
        {
            k++; i++;
        }
        if(k == 3 && s[i] == 'l')
        {
            k++; i++;
        }
        if(k == 4 && s[i] == 'o')
        {
            k++; i++;
        }
    }

    if(k == 5)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
