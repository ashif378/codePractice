#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, a[200009], b[200009], s, k;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    for(int i=0; i<n; i++)
    {
        s=0;
        k=i;
        for(int j=i+1; j<n; j++)
        {
            if(a[k] < a[j])
            {
                if((a[j] - a[k]) == (j-k))
                {
                    s+=a[k];
                    k = j;
                }
            }
        }
        s+=a[k];
        b[i] = s;
    }

    sort(b, b+n);
    cout << b[n-1];

    return 0;
}
