#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    int t, a, b, i, j;

    cin >> t;

    for(i=0; i<t; i++)
    {
        cin >> a >> b;

        if(a > b)
        {
            cout << ">\n";
        }
        else if(a < b)
        {
            cout << "<\n";
        }
        else if(a == b)
        {
            cout << "=\n";
        }

    }


    return 0;
}
