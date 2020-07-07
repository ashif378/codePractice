#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, a, pos = 1, des;
    long long time = 0;

    cin >> n >> m;

    for(int i=0; i<m; i++)
    {
        cin >> a;
        des = a;

        if(pos < des)
        {
            time += des - pos;
        }
        else if(pos > des)
        {
            time += n -  (pos - des);
        }

        pos = a;
    }

    cout << time << endl;


    return 0;
}
