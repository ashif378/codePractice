#include <stdio.h>
#include <string.h>

int main()
{
    char a[100], b[100];
    int i=0;
    gets(a);
    gets(b);

    i=strlen(a);
    printf("%d", i);

    return 0;
}
