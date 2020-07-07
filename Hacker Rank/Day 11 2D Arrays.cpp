#include <iostream>

using namespace std;

int main()
{
    int i, j, sum = 0, l, m, a[6][6], s=-500;

    for(i=0; i<6; i++)
    {
        for(j=0; j<6; j++)
        {
            cin >> a[i][j];
        }
    }

    for(i=1; i<5; i++)
    {
        for(j=1; j<5; j++)
        {
            sum = 0;
            l = i-1;
            for(m = j-1 ; m < j+2 ; m++)
            {
                sum += a[l][m];
            }

            sum += a[i][j];

            l = i+1;
            for(m = j-1; m < j+2 ; m++)
            {
                sum += a[l][m];
            }

            if(sum > s)
            {
                s = sum;
            }
        }
    }

    cout << s;

    return 0;
}
