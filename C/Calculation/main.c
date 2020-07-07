#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, sum, sub, mul;
    float div;

    printf("Enter value1: ");
    scanf("%d", &a);
    printf("Enter value2: ");
    scanf("%d", &b);

    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=(float)a/b;

    printf("\nSum = %d", sum);
    printf("\nSub = %d", sub);
    printf("\nMul = %d", mul);
    printf("\nDiv = %.3f", div);

    return 0;
}
