#include <iostream>

using namespace std;

int main()
{
    int i, a, b, sum=0;

    for(i=1; i<1000; i++)
    {
        a = i % 3;
        b = i % 5;

        if(a == 0 || b == 0)
        {
            sum += i;
        }
    }
    cout << sum << endl;


}
