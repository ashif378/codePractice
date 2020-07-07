#include <iostream>
using namespace std;

class myclass
{
    int a, b;
public:
    void setab(int i, int j)
    {
        a = i;
        b = j;
    }
    void showab()
    {
        cout << a << ' ' << b << endl;
    }
};

class yourclass
{
    int a, b;
public:
    void setab(int i, int j)
    {
        a = i;
        b = j;
    }
    void showab()
    {
        cout << a << ' ' << b << endl;
    }
};


int main()
{
    myclass o1, o3;
    yourclass o2;

    o1.setab(5, 5);
    o3 = o1;

    o1.showab();
    o3.showab();


    return 0;
}
