#include <iostream>

using namespace std;

int main()
{
    int a, b, c, x, y, z;

    cin >> x >> y >> z;
    cin >> a >> b >> c;

    if(x <= a)
    {
        a = a - x;
    }
    else
    {
        cout << "NO\n";
        return 0;
    }

    if(y <= a+b)
    {
        if(y <= a)
        {
            a = a - y;
        }
        else
        {
            y = y - a;
            b = b - y;
        }
    }
    else

    {
        cout << "NO\n";
        return 0;
    }

    if(z <= a+b+c)
    {
        cout << "YES\n";
        return 0;
    }
    else
    {
        cout << "NO\n";
    }



    return 0;
}

