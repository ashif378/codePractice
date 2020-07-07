#include <iostream>

using namespace std;

int main()
{
    long int a, b, c, d, x, y, z;
    int t;
    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> a >> b >> c >> d;
        x = b;
        y = c;
        z = c;
        cout << x << ' ' << y << ' ' << z << endl;
    }
}
