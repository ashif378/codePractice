#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int i, N, x=0, sum=0;
    cin >> N;

    for(i=0; i<N; i++)
    {
        cin >> x;
        if(i%2 == 0)
        {
            sum += x;
        }
    }

    cout << sum << endl;



    return 0;
}
