#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, s1;
    s1.clear();

    cin >> s;

    int l, j = 0;

    l = s.length();

    for(int i=0; i<l; i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'A' && s[i] != 'E' &&
           s[i] != 'I' && s[i] != 'O' && s[i] != 'U' && s[i] != 'y' && s[i] != 'Y')
        {
            s1.insert(j, 1, '.');

            s1[j++] = '.';

            s1.insert(j, 1, '.');

            if(s[i] >= 'A' && s[i] <= 'Z')
            {
                s1[j++] = (char)(s[i] + 32);
            }
            else
            {
                s1[j++] = s[i];
            }
        }
    }

    cout << s1;

    return 0;


}
