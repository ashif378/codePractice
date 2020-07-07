#include <iostream>

using namespace std;

int main()
{
    int T, N, i;

    cin >> T;
    for(i=0; i<T; i++)
    {
        cin >> N;
        if(N%2 == 0)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}
