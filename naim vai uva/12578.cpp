#include <bits/stdc++.h>

using namespace std;

#define pi acos(-1)

int main()
{
    int t;
    double wid, rad, flag, cir, len;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> len;

        wid = len*.6;
        rad = len/5;

        cir = pi*rad*rad;
        flag = (wid*len) - cir;

        printf("%.2lf %.2lf\n", cir, flag);
    }

    return 0;
}
