#include <bits/stdc++.h>

using namespace std;

int main()
{
    float n, m, a;
    float s, s1;

    cin >> n >> m >> a;

    s = ceil(n/a);
    s1 = ceil(m/a);

    cout << n/a << ' ' << s << endl;
    cout << m/a << ' ' << s1 << endl;

    printf("%.0f", s*s1);


    return 0;
}
