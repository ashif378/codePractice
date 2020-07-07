#include <iostream>

using namespace std;

class coord
{
    int x, y;
public:
    coord()
    {
        x = 0;
        y = 0;
    }
    coord(int i, int j)
    {
        x = i;
        y = j;
    }
    void get_xy(int &i, int &j)
    {
        i = x;
        j = y;
    }
    coord operator+(coord mm);
};

coord coord::operator+(coord mm)
{
    coord temp;
    temp.x = x + mm.x;
    temp.y = y + mm.y;

    return temp;
}


int main()
{
    coord o1(10, 10), o2(5,3), o3;

    int x, y;

    o3 = o1 + o2;

    o3.get_xy(x, y);

    cout << "(o1 + o2) x: " << x << ", y: " << y << endl;

    return 0;
}
