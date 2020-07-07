#include <iostream>

using namespace std;

int main()
{
    int i, j, k, T, N, A[15], G[15], a, g;
    cin >> T;
    for(i=0; i<T; i++){
            a=0; g=0; k=0;
        cin >> N;
        for(j=0; j<11; j++){
            cin >> A[j] >> G[j];
            a += A[j];
            g += G[j];
        }

        if(N == g && N >= a){
            cout << "Case " << i+1 << ": Can't say!" << endl;
        }
        else cout << "Case " << i+1 << ": Hacked!" << endl;
    }

    return 0;
}
