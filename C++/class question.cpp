#include <iostream>
#include <cstring>
#include <cstdio>
using namespace std;

class string_
{
    int length;
    char s[100];
    void getstring(char *str, char *str2)
    {
        string_ s;
        length = strlen(str);
        //s = new char[length];
        strcpy(s, str);
    }

    void operator+(string_);

public:
    void show()
    {

    }

};

void string_::operator+(string_ ob)
{
    length = length+ob.length;
    //s = new char[length];
    strcat(s,ob.s);
    cout<<"\nConcatnated String is: "<<s;
}



int main()
{
    string_ o1("35 intake!"), o2("Best of Luck!!"), o3;
    o3 = o1 + o2;
    o3.show();


    return 0;
}
