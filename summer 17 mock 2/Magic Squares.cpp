#include <iostream>

using namespace std;

int main()
{
    int T;
    long long N, i, a;
    cin >> T;

    for(int j=0; j<T; j++){
            a=0;
        cin >> N;

        for(i=1; i<=(N*N); i++){
        a += i;
        }

        cout << "Case " << j+1 << ": " << a/N << endl;


    }

    return 0;
}
