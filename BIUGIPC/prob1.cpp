#include <iostream>

using namespace std;

int main()
{
    int t, i, n;

    cin >> t;

    for(i=0; i<t; i++)
    {
        cin >> n;
        if(n%2 == 0)
        {
            cout << "even\n";
        }
        else
        {
            cout << "odd\n";
        }
    }


    return 0;
}
