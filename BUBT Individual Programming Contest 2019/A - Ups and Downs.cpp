#include <iostream>

using namespace std;

int main()
{
    int T, n, m, *p, s, sum, b=0;

    cin >> T;

    for(int i=0; i<T; i++)
    {
        s=1; b=0;
        sum=0;
        cin >> n >> m;

        p = new int [m];

        for(int j=0; j<n/m; j++)
        {
            for(int z=0; z<m; z++)
            {
                if(b == 0)
                {
                    sum += -(s);
                    s++;
                }
                else
                {
                    sum += s;
                    s++;
                }
            }

            if(b == 0)
            {
                b = 1;
            }
            else
            {
                b = 0;
            }

        }

            cout << "Case " << i+1 << ": " << sum << endl;

    }


    return 0;
}
