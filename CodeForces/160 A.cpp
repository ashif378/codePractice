#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[1000], sum=0, s, t=0, coin=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
        sum += a[i];
    }
    s = sum/2;

    sort(a, a+n);

    for(int i=n-1; i>=0; i--)
    {
        t += a[i];
        coin++;
        if(t > s)
        {
            break;
        }
    }

    cout << coin;

    return 0;
}
