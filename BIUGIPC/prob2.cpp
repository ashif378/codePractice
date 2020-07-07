#include <iostream>

using namespace std;

int main()
{
    int t, i, n, sum, p;

    cin >> t;

    for(i=0; i<t; i++)
    {
        sum = 0;
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> p;
            sum += p;
        }
        cout << sum << endl;

    }


    return 0;
}
