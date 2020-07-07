#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i, a, b, total, r;

    for( ; ; )
    {
        total = 0;
        cin >> a >> b;
        if(a == 0 && b == 0)
        {
            break;
        }
        else
        {
            for(i = a; i <= b; i++)
            {
                r = sqrt(i);
                if(r*r == i)
                {
                    total++;
                }
            }
        }
        cout << total << endl;
    }


}
