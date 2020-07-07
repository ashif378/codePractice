#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a, b, c, xsum=0, ysum=0, zsum=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a >> b >> c;
        xsum += a;
        ysum += b;
        zsum += c;
    }

    if(xsum == 0 && ysum == 0 && zsum == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }


    return 0;
}
