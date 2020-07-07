#include <iostream>
using namespace std;

int main()
{
    int i, j, k, T, N, m;

    cin >> T;

    for(i=0; i<T; i++){
            m=0;
            cin >> N;
            if(N == 1){
                cout << "1" << endl;
            }
            else if(N > 1) {
                    for(k=0; k<N-1; k++){
                        m = (m+1)*2;
                    }
                    cout << m << endl;
            }

    }



    return 0;
}
