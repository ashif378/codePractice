#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, n, k, i, j;
    freopen("tabs.in", "r", stdin);

    cin >> T;

    for(i=0; i<T; i++)
    {
        cin >> n >> k;

        if(n == 1)
        {
            cout << "0" << endl;
        }
        else if(k == 1)
        {
            cout << "1" << endl;
        }
        else if(k == n)
        {
            cout << "1" << endl;
        }
        else
        {
            cout << "2" << endl;
        }
    }

    fclose(stdin);
    return 0;
}
