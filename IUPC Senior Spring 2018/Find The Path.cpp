#include <iostream>

using namespace std;

int main()
{
    int i, T, k;
    long int N;
    cin >> T;
    for(i=0; i<T; i++)
    {
        k = 0;
        cin >> N;
        for( ; ; )
        {
            if(N % 3 == 0)
            {
                N = N / 3;
                k++;
                if(N == 1)
                {
                    break;
                }
            }
            if(N % 2 == 0)
            {
                N = N / 2;
                k++;
                if(N == 1)
                {
                    break;
                }
            }
            if(N % 2 != 0 && N % 3 != 0)
            {
                if(N == 1)
                {
                    break;
                }
                N = N - 1;
                k++;
                if(N == 1)
                {
                    break;
                }
            }
        }
        cout << k << endl;
    }

    return 0;
}
