#include <iostream>

using namespace std;

int main()
{
    int i, j, n, k, m, t, s;

    cin >> t;
    for(i=0; i<t; i++)
    {
        s = 0;
        cin >> n >> k;
        j = 240 - k;
        for(m=0; m<=n ; m++)
        {
            s = s + (m*5);
            if(s > j)
            {
                break;
            }
        }

        cout << m-1 << endl;
    }

    return 0;
}
