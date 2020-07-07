#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, m, i, cnt;
    string s1, s2;

    cin >> T;

    for(i=0; i<T; i++)
    {
        cin >> m;
        cnt = 0;

        for(int j=0; j<m; j++)
        {
            cin >> s1 >> s2;
            if(s2 == "wine" && s1 == "water" || s1 == "soda")
            {
                cnt++;
            }
        }

        if(cnt == m)
        {
            cout << "Case " << i+1 << ": Yes";
        }
        else
        {
            cout << "Case " << i+1 << ": No";
        }
    }


    return 0;
}
