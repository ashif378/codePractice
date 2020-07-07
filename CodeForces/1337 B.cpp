#include <iostream>

using namespace std;

int main()
{
    int x, n, m, h, t, d;
    cin >> t;
    bool ok ;

    while(t--)
    {
        ok = 0;
        cin >> x >> n >> m;
        h = x;
        while(h != 0)
        {
            if(h <= (m*10))
            {
                ok = 1;
                break;
            }
            else
            {
                h = (h/2)+10;
                n--;
            }
            if(n < 0) break;
        }
        if(ok == 1) cout << "YES\n";
        else cout << "NO\n";

    }
    return 0;
}
