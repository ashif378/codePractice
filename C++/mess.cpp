#include <iostream>
#include <cstring>

using namespace std;

class mess
{
    char *name;
public:
    void set_info(char *ch)
    {
        name = (char *) malloc(strlen(ch)+1);


        strcpy(name, ch);
    }
};

int main()
{
    return 0;
}
