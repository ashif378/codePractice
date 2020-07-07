#include <bits/stdc++.h>
#define pi 3.1416

using namespace std;

int main()
{
    int t, i;
    double r;

    cin >> t;

    for(i=0; i<t ; i++)
    {
        cin >> r;

        cout << fixed << setprecision(6) << pi*r*r << endl;
    }


    return 0;
}
