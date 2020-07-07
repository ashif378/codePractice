#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[10], car=0, s=0, x;

    cin >> n;

    for(int i=0; i<5; i++)
    {
        a[i] = 0;
    }
    for(int i=0; i<n; i++)
    {
        cin >> x;
        a[x]++;
    }

    car += a[4];

    if(a[3] <= a[1])
    {
        car += a[3];
        a[1] = a[1] - a[3];
    }
    else
    {
        car += a[1];
        a[3] = a[3] - a[1];
        car += a[3];
        a[1] = 0;
    }

    car += (a[2]*2)/4;
    a[2] = (a[2]*2)%4;

    if(a[2] == 2)
    {
        if(a[1] >= 2)
        {
            car++;
            a[1] -= 2;

        }
        else
        {
            car++;
            a[1] = 0;
        }
    }
    if(a[1] != 0)
    {
        car += a[1]/4;
        if(a[1] % 4 != 0 )
        {
            car++;
        }
    }



    cout << car;

    return 0;
}
