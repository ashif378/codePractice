#include <iostream>
using namespace std;

int main()
{
    int T, i, n, j, q;

    cin >> T;
    for(i=0; i<T; i++)
    {
        cin >> n;
        q=0;
        for(j=4; ; j++)
        {
            if(j%2==0 || j%3==0 || j%5==0 || j%7==0)
            {
                q++;
                if(q == n)
                {
                    break;
                }
            }
        }

        cout << j << endl;
    }

    return 0;
}
