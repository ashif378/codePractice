#include <bits/stdc++.h>

using namespace std;

int main()
{
    int x[4];
    int a, b, c;

    for(int i=0; i<4; i++)
    {
        cin >> x[i];
    }

    int n = sizeof(x)/sizeof(x[0]);

    sort(x, x+n);

    a = x[3] - x[0];
    b = x[3] - x[1];
    c = x[3] - x[2];

    cout << a << " " << b << " " << c ;


    return 0;
}
