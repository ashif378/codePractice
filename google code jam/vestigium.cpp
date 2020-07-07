#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, a[101][101], b[101], k, r ,c;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;
        k = r = c = 0;
        for(int p=0; p<n; p++)
        {
            for(int q=0; q<n; q++)
            {
                cin >> a[p][q];
                if(p == q)
                {
                    k += a[p][q];
                }
            }
        }

        for(int p=0; p<n; p++)
        {
            for(int z=0; z<=100; z++)
            {
                b[z] = 0;
            }
            for(int q=0; q<n; q++)
            {
                if(b[a[p][q]] != 0)
                {
                    r++;
                    break;
                }
                else
                {
                    b[a[p][q]]++;
                }
            }

        }

        for(int q=0; q<n; q++)
        {
            for(int z=0; z<=100; z++)
            {
                b[z] = 0;
            }
            for(int p=0; p<n; p++)
            {
                if(b[a[p][q]] != 0)
                {
                    c++;
                    break;
                }
                else
                {
                    b[a[p][q]]++;
                }
            }

        }

        cout << "Case #" << i+1 << ": " << k << " " << r << " " << c << endl;


    }


    return 0;
}
