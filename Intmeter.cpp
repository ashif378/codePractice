#include <iostream>

using namespace std;

int main()
{
    int t, n;

    cin >> t;

    while(t--)
    {
        cin >> n;
        if(n > 0)
        {
            cout << "POSITIVE\n";
        }
        else if(n < 0)
        {
            cout << "NEGATIVE\n";
        }
        else
        {
            cout << "ZERO\n";
        }
    }


    return 0;
}

