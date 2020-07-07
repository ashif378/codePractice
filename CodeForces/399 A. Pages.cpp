#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, p, k, a, aa;

    cin >> n >> p >> k;

    if(p >= k)
    {
        a = p - k;
        if(a>1) cout << "<< ";
    }

    if(p>k)a=k;
    else a=p-1;

    aa = p-a;

    for(int i=0; i<a; i++)
    {
        if(aa == p) break;
        cout << aa++ << " ";
    }

    cout << "(" << p << ") ";
    int kk=k;
    int pp=p;
    for(int i=0; i<k; i++)
    {
        if(pp == n)break;
        cout << ++pp << " ";
        kk--;
        if(kk==0)break;
    }

    if(n-p > k)cout << ">>\n";
    else cout << endl;

    return 0;
}
