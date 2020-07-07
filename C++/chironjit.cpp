#include<iostream>
#include<conio.h>
#include<cstring>
using namespace std;
class string_
{
    char *str;
public:
    void display()
    {
        cout<<str;
    }
    friend  string_ operator + (string_,string_);
};
string_ operator + (string_ a,string_ b)
{
    string_ c;
    int m=strlen(a.str);
    strcpy(c.str,a.str);
    c.str[m]=' ';
    m++;
    for(int len=m+1; (*b.str)!='\0'; len++)
    {
        c.str[len]=*b.str;
        b.str++;
    }
    return(c);
}
int main()
{
    string_ p("Miraj"), q("Khan") ,r;
    r=p+q;
    r.display();

}
