#include <bits/stdc++.h>

using namespace std;

int main()
{
    double *p, q=0;
    int i, n, T, j;

    cin >> T;

    for(j=0; j<T; j++)
    {
        q = 0;
        cin >> n;
        p = new double [n];
        for(i=0; i<n; i++)
        {
            cin >> p[i];
            q += p[i];
        }
        printf("Case #%d: %.3lf\n", j+1, q/n);
        delete(p);
        n = 0;
    }
    return 0;
}
