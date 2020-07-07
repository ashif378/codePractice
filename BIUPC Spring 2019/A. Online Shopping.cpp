#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, a, b;

    cin >> t;

    for(int i=0; i<t ; i++)
    {
        cin >> a >> b;
        if(a <= b)
        {
            cout << "Online Shop\n";
        }
        else
        {
            cout << "Shopping Center\n";
        }
    }


    return 0;
}
