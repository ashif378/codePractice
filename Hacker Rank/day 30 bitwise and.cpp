#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, k, a, b;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n >> k;
        b = 0;

        for(int j=1; j<=n; j++)
        {
            for(int l=j+1; l<=n; l++)
            {

            a = j&l;

            if(a >= k)
            {
                a = 0;
            }

            if(a > b)
            {
                b = a;
            }
        }
        }

        cout << b << endl;
    }


    return 0;
}
