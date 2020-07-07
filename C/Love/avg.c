#include <stdio.h>

int main()
{
    int a, b, c, d, e;
    float average;

    printf("Enter five numbers: ");
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);

    average = (float)(a+b+c+d+e)/5;

    printf("The average is %f", average);

    return 0;
}
