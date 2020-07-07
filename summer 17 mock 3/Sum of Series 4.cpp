#include <iostream>

using namespace std;

int main()
{
    int i, j, T, N, p;
    long long int s = 0;

    cin >> T;
    for(i=0; i<T; i++){
            s = 0;
        cin >> N;
        for(j=1; j<=N; j++){
            if(j%3 == 0){
                p = -1;
            }
            else {
                p = 1;
            }
            s += j*p;
        }

        cout << s << endl;

    }

    return 0;
}
