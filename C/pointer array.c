#include<stdio.h>

int main()
{
    int *p, q;
    int a[5] = {11,21,31,41,51};

    p = a;

    printf("Value of 1st is %d \n", *p);
    printf("Value of 2nd is %d \n", *(p+1));
    printf("Value of 3rd is %d \n", *(p+2));

    return 0;
}
