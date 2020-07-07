#include <stdio.h>

int main()
{
    char name;
    scanf ("%[^\n]%*c", &name);
    printf("%s", name);
    return 0;

}
