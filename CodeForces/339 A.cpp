#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int s1[1001];

    int l, j=0;

    cin >> s;

    l = s.length();

    for(int i=0; i<l; i++)
    {
        if(s[i] == '1')
        {
            s1[j] = 1;
            j++;
        }
        else if(s[i] == '2')
        {
            s1[j] = 2;
            j++;
        }
        else if(s[i] == '3')
        {
            s1[j] = 3;
            j++;
        }

    }

    sort(s1, s1+j);

    for(int i=0; i<j; i++)
    {
        cout << s1[i];

        if(i+1 != j)
        {
            cout << "+";
        }
    }


    return 0;
}
