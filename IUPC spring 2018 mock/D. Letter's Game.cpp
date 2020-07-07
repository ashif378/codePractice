#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int T, j, i, k, len;
    char W[101];

    cin >> T;
    for(i=0; i<T; i++)
    {
        k = 0;
        cin >> W;
        len = strlen(W);
        for(j=0; j < len; j++)
        {
            if(W[j] >= 'A' && W[j] <= 'Z')
            {
                k++;
            }
        }
        cout << k << endl;
    }

    return 0;
}
