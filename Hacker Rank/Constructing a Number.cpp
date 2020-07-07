#include <iostream>

using namespace std;

int main()
{
    long long int a[100], s;
    int t, n, i, j;

    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n;
        s = 0;
        for(j=0; j<n; j++)
        {
            cin >> a[j];
            s += a[j];
        }
        if(s % 3 == 0)
        {
            cout << "Yes\n";
        }
        else
        {
            cout << "No\n";
        }
    }

    return 0;
}
