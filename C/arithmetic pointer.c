#include <stdio.h>

int main()
{
    int *p,q;

    p = &q;
    q = 1;
    (*p)++;

    printf("The value of q is %d.\n", q);

    return 0;
}
