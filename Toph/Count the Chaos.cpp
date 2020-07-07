
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, l[100010], s=0;

    cin >> n;

    for(int i=0; i<n; i++)
    {
        cin >> l[i];
    }

    for(int i=0; i<n; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            if(l[i] > l[j])
            {
                s++;
            }
        }
    }

    cout << s << endl;


    return 0;
}
