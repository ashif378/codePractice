#include <iostream>

using namespace std;

void insertion_sort(int A[], int N)
{
    int i, j, temp;

    for(i=0; i<N; i++)
    {
        temp = A[i];

        for(j=i-1; j>=0; j--)
        {
            if(A[j] > temp)
            {
                A[j+1] = A[j];
            }
            else
            {
                break;
            }
        }
        A[j+1] = temp;

        cout << "Step " << i+1 << ": ";
        for(int l=0; l<N; l++)
        {
            cout << A[l] << ' ';
        }
        cout << endl;

    }
}


int main()
{
    int *a, n;
    cin >> n;
    a = new int [n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    cout << endl;
    insertion_sort(a, n);

    cout << "\nSorted :: ";
    for(int i=0; i<n; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl << endl;


    return 0;
}
