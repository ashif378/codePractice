#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, R, P, X[100], x[100], i, j, u;

    cin >> T;
    for(i=0; i<T; i++)
    {
        cin >> N >> R >> P;
        if(N == 0)
        {
            if(P>=R)
            {
                cout << "0\n";
            }
            else
                cout << R-P << endl;
        }
        else
        {
            for(j=0; j<N; j++)
            {
                cin >> X[j];
                if(N > 1 && N >= j)
                {
                    x[j] = x[j+1] - x[j];
                }
                else
                {
                    x[0] = X[0];
                }
            }

            x[j+1] = R - X[j];

            for(int k=0; k<N-1; k++)
            {
                if(x[k] > P)
                {
                    u = x[k];
                }
                else
                {
                    u = P;
                }
            }

            if(u == P)
            {
                cout << "0\n";
            }
            else if(u > P)
            {
                cout << u-P << endl;
            }
            else if(u < P)
            {
                cout << P << endl;
            }
        }

    }


    return 0;
}
