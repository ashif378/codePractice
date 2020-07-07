#include <iostream>
#include <string.h>
#include <stdio.h>

using namespace std;

int i, j, m, n, A[50][50];
char s1[50], s2[50], B[50][50];

void LCS()
{
    for(i=0; i<=n; i++)
    {
        A[0][i] = 0;
    }
    for(i=0; i<=m; i++)
    {
        A[i][0] = 0;
    }

    //x - diagonal, u - from up, l - from left

    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
        {
            if(s1[i-1] == s2[j-1])
            {
                 A[i][j] = A[i-1][j-1] + 1;
                 B[i][j] = 'x';
            }
            else if(A[i-1][j] >= A[i][j-1])
            {
                A[i][j] = A[i-1][j];
                B[i][j] = 'u';
            }
            else
            {
                A[i][j] = A[i][j-1];
                B[i][j] = 'l';
            }
        }
    }

    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout << A[i][j] << " | ";
        }
        cout << endl;
    }


    for(i=0; i<=m; i++)
    {
        for(j=0; j<=n; j++)
        {
            cout << B[i][j] << " | ";
        }
        cout << endl;
    }

    cout << endl;
}

void print(int a, int b)
{
    if(a==0 || b==0)
    {
        return;
    }
    if(B[a][b] == 'x')
    {
        print(a-1, b-1);
        cout << s1[a-1];
    }
    else if(B[a][b] == 'u')
    {
        print(a-1, b);
    }
    else
    {
        print(a, b-1);
    }

}


int main()
{
    //cout << "Enter 1st string: ";
    cin >> s1;

    //cout << "Enter 2nd string: ";
    cin >> s2;

    m = strlen(s1);
    n = strlen(s2);

    LCS();

    print(m, n);

    cout << endl;

    return 0;

}
