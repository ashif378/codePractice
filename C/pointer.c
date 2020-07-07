#include <stdio.h>

int main()
{
    int *p, q;

    p = &q;
    q = 1;

    printf("The value of q is %d.\n", q);
    printf("The value of p is %d.\n", p);
    printf("The value pointing by p is %d.\n", *p);

    return 0;
}
