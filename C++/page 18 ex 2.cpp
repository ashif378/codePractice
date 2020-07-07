#include <iostream>

using namespace std;

int main()
{
    float feet, inch;

    for( ; ; )
    {
        cin >> feet;
        if(feet == 0)
        {
            return 0;
        }
        else
        {
            inch = feet * 12;
            cout << inch << "\n" ;
        }
    }

    return 0;
}
