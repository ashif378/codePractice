#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    int T, A, i;
    float p, R;

    cin >> T >> A;

    for(i=0; i<T; i++){
        cin >> R;

        p = (A*A) - (3.14156 * R * R);

        printf("%f\n", p) ;
    }

    return 0;
}
