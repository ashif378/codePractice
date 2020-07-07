#include <iostream>

using namespace std;

class box{
    int lenght;
public:
    int sett(int n)
    {
        lenght = n;
    }
    int gett()
    {
        return lenght;
    }
};

int main()
{
    box a;
    a.sett(50);

    cout << a.gett();

    return 0;
}
