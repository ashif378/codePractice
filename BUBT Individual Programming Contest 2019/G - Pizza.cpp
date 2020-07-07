#include <iostream>

using namespace std;

int main()
{
    int m, n, a, b ,c;

    cin >> m >> n;

    if(m%2 != 0)
    {
        a = (m/2)*n;
        b = (n/2);
        c = a+b;
    }
    else if(n%2 != 0)
    {
        a = (n/2)*m;
        b = (m/2);
        c = a+b;
    }
    else
    {
        c = (m/2)*n;
    }

    cout << c << endl;




    return 0;
}
