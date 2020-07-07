#include <iostream>
using namespace std;

class samp
{
    int i;
public:
    samp(int n)
    {
        i = n;
        cout << "Constructing" << endl;
    }

    ~samp()
    {
        cout << "Destructing" << endl;
    }
    int get_i()
    {
        return i;
    }

};

int sqr_it(samp o)
{
    return o.get_i() * o.get_i();
}

int main()
{
    samp a(10);

    sqr_it(a);

    cout << sqr_it(a) << endl;

    return 0;
}


