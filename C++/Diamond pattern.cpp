#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int i, j, k, n, p, q, c;
    cin >> n;
    p = n;
    q = n;

    for(i=0 ; i< n ; i++)
    {
        c = 0;
        for(j=0; j<p-1; j++)
        {
            cout << "  ";
        }

        for(k=0; k <= (2*i) ; k++)
        {
            if(k <= ceil(i+1/2))
            {
                c++;
                cout << c << ' ';
            }
            else
            {
                c--;
                cout << c << ' ';
            }
        }

        p--;

        cout << "\n";
    }

    for(i=1 ; i < n; i++)
    {
        c = 0;
        for(j=1; j<=i; j++)
        {
            cout << "  ";
        }

        for(k = (q-1)*2 - 1; k > 0 ; k--)
        {
            if(k >= q-1)
            {
                c++;
                cout << c << ' ';
            }
            else
            {
                c--;
                cout << c << ' ';
            }

        }
        q--;

        cout << "\n";
    }
}
