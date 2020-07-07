#include <bits/stdc++.h>

using namespace std;

int main()
{
    int i, j, n, k=1, cnt=0, a, f=0;
    vector <int> v;
    vector <int> :: iterator it;

    cin >> n;

    for(i=0; i<n; i++)
    {
        cin >> a;
        v.push_back(a);
    }

    while(1)
    {
        for(it=v.begin(); it != v.end(); )
        {
            if(*it == k)
            {
                v.erase(it);
                k++;
            }
            else
            {
                it++;
            }

            if(k == n)
            {
                f=1;
                break;
            }
        }

        cnt++;
        if(k == n || f == 1) break;
    }

    if(cnt == 1)
        cout << cnt << endl;
    else
        cout << cnt+1 << endl;


    return 0;
}
