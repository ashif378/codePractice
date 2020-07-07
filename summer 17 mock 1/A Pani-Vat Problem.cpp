#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int T, i;
    long long x, y, m;

    cin >> T;

    for(i=0; i<T; i++){
    cin >> x >> y;

    m = sqrt(x) * sqrt(y);

    cout << m << endl;
    }

    return 0;
}
