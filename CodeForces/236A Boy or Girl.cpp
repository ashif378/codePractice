#include <iostream>
#include <string>

using namespace std;

int main()
{
    int l, i, n=0;
    string s;
    char c[26];

    for(i='a' ; i<='z' ; i++)
    {
        c[i] = 0;
    }

    cin >> s;

    l = s.length();

    for(i=0; i<l; i++)
    {
        c[s[i]]++;
    }

    for(i='a' ; i<='z' ; i++)
    {
        if(c[i] != 0)
        {
            n++;
        }
    }


    if(n%2 == 0)
    {
        cout << "CHAT WITH HER!";
    }
    else
    {
        cout << "IGNORE HIM!";
    }


    return 0;
}
