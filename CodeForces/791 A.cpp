#include <iostream>
using namespace std;

int main()
{
    int a, b, i;

    cin >> a >> b;

    if(a == b)
    {
        cout << 1;
    }
    else
    {
        for(i=1; ; i++)
    {
        a = a*3;
        b = b*2;

        if(a > b)
        {
            break;
        }
    }
    cout << i ;
    }


    return 0;
}
