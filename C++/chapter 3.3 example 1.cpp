#include <iostream>
#include <cstring>

using namespace std;

class samp
{
    char s[80];
public:
    void show()
    {
        cout << s << endl;
    }
    void set(char *str)
    {
        strcpy(s, str);
    }
};

samp intput()
{
    char s[80];
    samp str;

    cout << "Enter a string: ";
    cin >> s;

    return str;
}

int main()
{
    samp ob;

    ob = intput();
    ob.show();

    return 0;
}
