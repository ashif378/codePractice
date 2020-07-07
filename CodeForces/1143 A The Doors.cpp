#include <iostream>

using namespace std;

int main()
{
    int n, *a;

    cin >> n;

    a = new int [n];

    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    if(a[n-1] == 0)
    {
        for(int i = (n-2) ; i<n-1 ; i--)
        {
            if(a[i] == 1)
            {
                cout << i+1 << endl;
                break;
            }
        }

    }
    else
    {
        for(int i = (n-2) ; i<n-1 ; i--)
        {
            if(a[i] == 0)
                {
                    cout << i+1 << endl;
                    break;
                }
        }
    }


    return 0;
}
