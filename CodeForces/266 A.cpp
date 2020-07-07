#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    int l, k = 0;

    cin >> l >> s;

    for(int i=0; i<l-1; i++)
    {
        if(s[i] == s[i+1])
        {
            k++;
        }
    }

    cout << k;


    return 0;
}
