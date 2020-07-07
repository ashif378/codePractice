#include <iostream>

using namespace std;

int main()
{
    int T, Q;
    long int N, x, y, a[1000000];

    cin >> T;

    for(int i=0; i<T; i++){
        cin >> N >> Q;

        for(int k=0; k<N; k++){
            a[k] = 0;
        }

        for(int j=0; j<Q; j++){
            cin >> x >> y;
            for(int f=x-1; f<=y-1; f++){
                a[f] += 1;
            }
        }

        for(int u=0; u<N; u++){
            a[u] % 2 == 0 ? cout << "W " : cout << "B ";
        }

            cout << endl;

    }

    return 0;
}
