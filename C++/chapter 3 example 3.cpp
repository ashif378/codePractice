#include <iostream>
#include <cstring>
#include <cstdio>
#include <cstdlib>

using namespace std;

class strtype
{
    char *p;
    int len;
public:
    strtype(char *ptr);
    ~strtype();
    void show();
};

strtype::strtype(char *ptr)
{
    len = strlen(ptr);
    p = (char *) malloc(len+1);
    if(!p)
    {
        cout << "Allocation error" << endl;
        exit(1);
    }
    strcpy(p, ptr);
}

strtype::~strtype()
{
    cout << "Freeing p" << endl;
    free(p);
}

void strtype::show()
{
    cout << p << " - length: " << len;
    cout << endl;
}


int main()
{
    strtype s1("This is a test."), s2("I love programming.");

    s1.show();
    s2.show();

    return 0;
}

