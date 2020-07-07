#include <iostream>
using namespace std;

class alpha
{
public:
    alpha(int x, char a)
    {
        cout << "In alpha class\n";
    }
};

class beta : public alpha
{
public:
    beta(int y, char b) : alpha(y, b)
    {
        cout << "In beta class\n";
    }
};

class gamma : public beta
{
public:
    gamma(int z, char c): beta(z, c)
    {
        cout << "In gamma class\n";
    }
};


int main()
{
    gamma obj(2, 'A');


    return 0;
}

