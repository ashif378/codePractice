#include <iostream>
using namespace std;

int minimum(int x, int y)
{
    if(x > y)
        return y;
    else
        return x;
}

double minimum(double x, double y)
{
    if(x > y)
        return y;
    else
        return x;
}

char minimum(char x, char y)
{
    if(x > y)
        return y;
    else
        return x;
}

int main()
{
    char num1, num2, minn;

    cin >> num1 >> num2;
    minn = minimum(num1, num2);

    cout << minn;

    return 0;
}
