#include <iostream>
#include <cstdio>
#include <cstdlib>

using namespace std;

int main()
{
    long long int h, o;

    while(scanf("%lld %lld", &h, &o) != EOF)
    {
        if(o >= h)
        {
        cout << o - h << endl;
        }
        else
        {
            cout << h - o << endl;
        }
    }
    return 0;
}
