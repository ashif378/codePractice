#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    long long int total, i, s, a, b, c;

    cin >> t;

    for(i = 0; i < t; i++)
    {
        total = 0;
        cin >> s >> a >> b >> c;

        total = ((s/c) + ((s/a)*b));

        cout << total << endl;
    }


    return 0;
}
