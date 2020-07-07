#include <bits/stdc++.h>

using namespace std;

int main()
{
    int T, *number, n, cnt=0;
    string name, name1;

    cin >> T;
    number = new int [T];

    for(int i=0; i<T; i++)
    {
        cin >> name >> n;

        number[name] = n;
    }

    for( ; ; )
    {

        cin >> name1;
        if(name1 == "0")
        {
            return 0;
        }
        if(number[name1])
        {
            cout << name1 << "=" << number[name1] << endl;
        }
        else
            cout << "not found\n";




        name1 = {"0"};
    }


    return 0;
}
