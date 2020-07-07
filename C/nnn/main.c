#include <stdio.h>


int main()
{
    float a, b, sum;
    char chh;

    printf("Enter an integer: ");
    scanf("%f", &a);
    printf("Enter another integer: ");
    scanf("%f", &b);
    printf("Enter an character: ");
    scanf("%c",&chh);

    sum=a+b;

    printf("%f %c %f = %g", a, chh, b, sum);

    return 0;
}
