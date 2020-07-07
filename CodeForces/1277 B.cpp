#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t, n, z, l;
    vector<int> a;

    cin >> t;

    for(int i=0; i<t; i++)
    {
        cin >> n;
        for(int j=0; j<n; j++)
        {
            cin >> z;
            if(z%2 == 0)
                a.push_back(z);
        }

        vector<int>::iterator ip;

        std::sort(a.begin(), a.end());

        l = a.size();
        ip = std::unique(a.begin(), a.begin() + l);

        v.resize(std::distance(a.begin(), ip));



    }


    return 0;
}
