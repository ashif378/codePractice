#include <iostream>
using namespace std;

int main()
{
    int n, A[600], i, j, temp, k=0, flag=0, c=0, T;

    cin  >> T;

    for(int l=0; l<T; l++)
    {
    cin >> n;
    k=0; flag=0; c=0;
    for(i=0; i<n; i++)
    {
        cin >> A[i];
    }

    for(j=0; j<n-1; j++)
    {
        flag = 0;
        for(i=0; i<n-j-1; i++)
        {
            if(A[i] > A[i+1])
            {
                swap(A[i], A[i+1]);
                k++;
                flag++;
            }
        }
        if(flag > 0)
        {
                c++;
        }

    }

    cout << "The number of exchanges available is " << k <<"." << endl;
    cout << "Minimum number of exchanges you need to make is " << c << "." << endl << endl;
    }

    return 0;
}
