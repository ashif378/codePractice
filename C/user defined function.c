#include <stdio.h>

int sum(int a, int b)
{
    int sum;
    sum = a+b;
}

int main()
{
    int a, b;
    Printf("Enter an integer: ");
    scanf("%d", &a);
    Printf("Enter another integer: ");
    scanf("%d", &b);

    printf("The sum is : %d", sum(a,b));

    return 0;
}
