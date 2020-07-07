#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, i, j, l, cnt;
    string s;
    list <char> li;
    list <char> :: iterator it;

    cin >> t;
    for(i=0; i<t; i++)
    {
        cin >> s;

        l = s.length();

        char s1[l+1], s2[l+1];

        strcpy(s1, s.c_str());

        for(j=0; j<l; j++)
        {
            if(s1[j] == s1[j+1])
            {
                cnt++;
            }
            else
            {
                if(cnt > 2)
                {
                    li.push_back(cnt);
                    li.push_back(s1[j]);
                }

                cnt = 0;

            }
        }

        for(it = li.begin() ; it != li.end() ; it++)
        {
            cout << *it ;
        }

    }


    return 0;
}
