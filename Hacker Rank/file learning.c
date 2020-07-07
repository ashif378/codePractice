#include <stdio.h>

int main()
{
    int i;
    FILE *p;
    char a[10];

    p = fopen("one.txt", "w");
    fclose(p);




    return 0;
}
