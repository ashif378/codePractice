#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, *s, *e, *ck, ed;
    string ar=NULL;
    cin >> t;
    for(int h=0; h<t; h++)
    {
        cin >> n;
        s = new int[n];
        e = new int[n];
        ck = new int[n];
        for(int i=0; i<n; i++)
        {
            cin >> s[h] >> e[h];
            ck[i] = 0;
        }
        if(n == 2)
            cout << "CJ\n";
        else
        {
            ar.append(1, 'C');
            ck[0] = 1;
            for(int i=1; i<n; i++)
            {
                ed = e[i-1];
                if(s[i] >= ed && ck == 0)
                {

                }
            }
        }





        s = NULL;
        e = NULL;

    }

    return 0;
}
