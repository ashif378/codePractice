#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s1, s2;
    int l, x;

    cin >> s1 >> s2;

    l = s1.length();

    for(int i=0; i<l; i++)
    {
        if(s1[i] >= 'A' && s1[i] <= 'Z')
        {
            s1[i] = s1[i] + 32 ;
        }

        if(s2[i] >= 'A' && s2[i] <= 'Z')
        {
            s2[i] = s2[i] + 32 ;
        }
    }

    x = strcmp(s1.c_str(), s2.c_str());


    if(x==0)
    {
        cout << "0";
    }
    else if(x > 0)
    {
        cout << "1";
    }
    else
    {
        cout << "-1";
    }


    return 0;
}
