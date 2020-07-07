#include <bits/stdc++.h>

using namespace std;

int main()
{
    int D, M, Y, T, t, R, K, i, j, p;
    cin >> T;
    for(i =0; i<T; i++)
    {
        p = 0;
        cin >> D >> M >> Y;
        cin >> t >> R >> K;

        if(Y > 2018)
        {
            MM: if(R <= (t-K))
            {
                cout << "Case " << i+1 <<": Valid.\n";

                for(j = 1; j<=K; j++)
                {
                    p += (j*10);
                }
                cout << "Total Penalty Money: " << p << "$.\n";
            }
            else
            {
                cout << "Case " << i+1 <<": Invalid.\n";
            }
        }

        else if(Y == 2018 && M > 8)
        {
            goto MM;
        }

        else if(Y == 2018 && M == 8 && D > 12)
        {
            goto MM;
        }

        else
        {
            cout << "Case " << i+1 <<": Expired.\n";
        }
    }


    return 0;
}

