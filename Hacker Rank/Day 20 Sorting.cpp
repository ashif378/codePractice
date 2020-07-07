#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, *a, numberOfSwaps, i, j;
    cin >> n;
    a = new int [n];

    for(i=0; i<n; i++)
    {
        cin >> a[i];
    }

    numberOfSwaps = 0;

    for (i = 0; i < n; i++)
    {

        for (j = 0; j < n - 1; j++)
        {

            if (a[j] > a[j + 1])
            {
                swap(a[j], a[j + 1]);
                numberOfSwaps++;
            }
        }


        if (numberOfSwaps == 0)
        {
            break;
        }
    }

    cout << "Array is sorted in " << numberOfSwaps << " swaps.\n";
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[n-1] << endl;



    return 0;
}
