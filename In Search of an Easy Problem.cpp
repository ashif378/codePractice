#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, i, m, cnt=0;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> m;
        if(m == 0)
        {
        }
        else
        {
            cnt++;
        }
    }

    if(cnt == 0)
    {
        cout << "EASY\n";
    }
    else
        cout << "HARD\n";

    return 0;
}
