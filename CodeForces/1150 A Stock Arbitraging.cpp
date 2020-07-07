#include <iostream>

using namespace std;

int main()
{
    int n, m, r, *s, *b, i, minn = 99999, maxx = -99999, qu, rr ;

    cin >> n >> m >> r;

    s = new int[n];
    b = new int[m];

    for(i=0 ; i<n ; i++)
    {
        cin >> s[i];
        if(s[i] < minn)
        {
            minn = s[i];
        }

    }

    for(i=0 ; i<m ; i++)
    {
        cin >> b[i];
        if(b[i] > maxx)
        {
            maxx = b[i];
        }
    }

    if(maxx <= minn)
    {
        cout << r ;
    }
    else
    {
        rr = r%minn;
        qu = r / minn;

        r = rr + (qu * maxx);

        cout << r ;
    }

    return 0;
}
