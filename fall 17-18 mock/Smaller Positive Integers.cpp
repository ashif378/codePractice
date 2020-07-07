#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{
    int T, i, n;

    cin >> T;

    for(i=0; i<T; i++)
    {
        cin >> n;

        if(n==0)
        {
            cout << "Case " << i+1 << ": 0" << endl;
        }
        else
        {
        n = abs(n);
        cout << "Case " << i+1 << ": " << n-1 << endl;
        }
    }

    return 0;
}
