#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a;

    while (scanf("%d", &t) != EOF)
    {

        int  *even, *odd, e=0, o=0;

        even = new int[t];
        odd = new int[t];

        for(int i=0; i<t; i++)
        {
            cin >> a;
            if(a % 2 == 0)
            {
                even[e] = a;
                e++;
            }
            else
            {
                odd[o] = a;
                o++;
            }
        }

        sort(even, even+e);

        sort(odd, odd+o);

        for(int i=0; i<e; i++)
        {
            cout << even[i] << ' ';
        }

        for(int j=o-1; j>=0; j--)
        {
            cout << odd[j] << ' ';
        }
        cout << endl;
    }
    return 0;

}
