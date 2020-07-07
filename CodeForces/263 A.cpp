#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m[5][5], a, b, c=0;

    for(int i=0; i<5; i++)
    {
        for(int j=0; j<5; j++)
        {
            cin >> m[i][j];
            if(m[i][j] == 1)
            {
                a=i;b=j;
            }
        }
    }

    c += abs(a-2);
    c += abs(b-2);

    cout << c;


    return 0;
}
