#include <iostream>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    int s = 0;
    while (n != 0)
    {
        if (n % 10 == 4 || n % 10 == 7)
        {
            s++;
        }
        n /= 10;
    }
    if (s == 4 || s == 7)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
