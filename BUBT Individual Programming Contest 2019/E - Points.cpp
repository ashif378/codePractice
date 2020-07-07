#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, p, q, t;

    cin >> t;

    for(int i=0; i<q; i++)
    {
        cin >> a >> b >> c >> d;
        p = a;
        q = c;
        if(q == p)
        {
            q++;
        }
        cout << p << " " << q << endl;

    }


    return 0;
}

