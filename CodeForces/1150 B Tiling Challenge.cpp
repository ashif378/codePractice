//Not Completed

#include <iostream>

using namespace std;

int main()
{
    int n, i, j, k = 0;
    string *p;
    cin >> n;

    p = new string[n];

    for(i=0; i<n; i++)
    {
        cin >> p[i];
    }

    for(i=1 ; i<n-1 ; i++)
    {
        for(j=1 ; j<n-1; j++)
        {
            if(p[i][j] == '.')
            {
                if(p[i-1][j] == '.' && p[i][j-1] == '.' && p[i][j+1] == '.' && p[i+1][j] == '.')
                {
                    cout << "YES" ;
                    return 0;
                }
            }
        }
    }
    if(k == 0)
    {
        cout << "NO";
    }


    return 0;
}
