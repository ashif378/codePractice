#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q, s[101], n,a,e;
    bool flag;

    cin >> q;

    for(int i=0; i<q; i++)
    {
        cin >> n;
        flag = false;
        e=0;

        for(int j=0; j<n; j++)
        {
            cin >> a;

            if(a<=2048)
            {
                if(a == 2048)
                {
                    flag = true;
                }
                else
                {
                    s[e] = a;
                    e++;
                }
            }
        }

        if(flag == true)
        {
            cout << "YES\n";
        }
        else
        {
            sort(s, s+e, greater<int>());
            for(int j=0; j<e-1; j++)
            {


                /*for(int z=0; z<e; z++)
                {
                    cout << s[z] << ' ';
                }
                cout << endl;*/

                if(s[j] == s[j+1])
                {
                    s[j+1] = s[j+1] + s[j];

                    if(s[j+1] == 2048)
                    {
                        cout << "Yes\n";
                        flag = true;
                        break;
                    }

                    s[j] = 0;
                    j =-1;
                    sort(s, s+e, greater<int>());
                    e--;

                }

            }
            if(flag == false)
            {
                cout << "NO\n";
            }
        }
    }

    return 0;
}
