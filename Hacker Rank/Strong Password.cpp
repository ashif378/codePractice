#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, len, m = 0;
    char a[101];

    cin >> n;
    cin >> a;

    len = strlen(a);
    if(len >= 6)
    {
        m++;
    }

    for(int i=0; i<len-1; i++)
    {
        if(a[i] >= 48 && a[i] <= 57)
        {
            m++;
            break;
        }
    }

    for(int i=0; i<len-1; i++)
    {
        if(a[i] >= 65 && a[i] <= 90)
        {
            m++;
            break;
        }
    }

    for(int i=0; i<len-1; i++)
    {
        if(a[i] >= 97 && a[i] <= 122)
        {
            m++;
            break;
        }
    }

    for(int i=0; i<len-1; i++)
    {
        if(a[i]  || a[i] )
        {
            m++;
            break;
        }
    }


    return 0;
}
