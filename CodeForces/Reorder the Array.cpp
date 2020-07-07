#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int *arr;
    int n, t, c=0;
    cin >> n;
    arr = new long long int [n];

    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }

    t = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr+t);

    for(int i=0; i<n-1; i++)
    {
        if(arr[i] < arr[i+1])
        {
            c = i+1;
            break;
        }
    }

    if(c == 0)
    {
        cout << c;
    }
    else
    {
        cout << (n-1) - (c - 1);
    }



    return 0;
}
