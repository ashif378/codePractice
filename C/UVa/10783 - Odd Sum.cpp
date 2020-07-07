#include <iostream>
using namespace std;

int main()
{
    int i, j, T, a, b, sum;

    cin >> T;
    for(i=0; i<T; i++)
    {
        sum = 0;
        cin >> a >> b;

        if(a%2 == 0)
        {
            j = a+1;
        }
        else
        {
            j = a;
        }

        for(j; j<=b; j = j+2)
        {
            sum += j;
        }

        cout << "Case " << i+1 << ": " << sum << endl;
    }

    return 0;
}
