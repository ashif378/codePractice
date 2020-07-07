#include <iostream>

using namespace std;

int main()
{
    int T, N, i, a, b;

    cin >> T;
    for(i=0; i<T; i++)
    {
        cin >> a >> b;
        N = a*a + b*b;
        cout << "Case " << i+1 << ": " << N << endl;
    }

    return 0;
}
