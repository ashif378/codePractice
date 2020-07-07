#include<iostream>
#include<string.h>

using namespace std;

class string_
{
private:
    int length;
    char *s;

public:
    string_()
    {
        length=0;
        s = new char[length+1];
    }

    string_(char *str)
    {
        length = strlen(str);
        s = new char[length+1];
        strcpy(s,str);
    }

    friend string_ operator +(string_ &s1, string_ &s2);

    void show()
    {
        cout << s << endl;
    }
};



string_ operator +(string_ &s1, string_ &s2)
{
    string_ temp;
    temp.length=s1.length+s2.length;
    delete temp.s;
    temp.s=new char[temp.length+1];
    strcpy(temp.s,s1.s);
    strcat(temp.s,s2.s);
    return temp;
}

int main()
{
    string_ s1("35 Intake!"), s2("Best of Luck!!"), s3;

    s3=s1+s2;

    s3.show();

    return 0;
}
