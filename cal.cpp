#include <iostream>

using namespace std;

int add(int a, int b)
{
    cout << a+b << endl;
}

int sub(int a, int b)
{
    cout << a - b << endl;
}

int mul(int a, int b)
{
    cout << a * b << endl;
}

void div(int a, int b)
{
    cout << ((float)a / (float)b) << endl;
}

int main()
{
    int choice;

    cin >> choice;

    if(choice < 1 || choice > 5)
    {
        cout << "Wrong Input\n\n";
        return 0;
    }

    int a, b;

    cin >> a >> b;

    if(choice == 1)
    {
        add(a, b);
    }
    else if(choice == 2)
    {
        sub(a, b);
    }
    else if(choice == 3)
    {
        mul(a, b);
    }
    else if(choice == 4)
    {
        div(a, b);
    }
    else if(choice == 5)
    {
        add(a, b);
        sub(a, b);
        mul(a, b);
        div(a, b);
    }

    return 0;
}
