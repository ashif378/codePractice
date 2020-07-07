#include <stdio.h>

int factorial(int num)
{
    if (num == 0)
    {
        return 1;
    }
    else
    {
        return(num * factorial(num - 1));
    }
}

int main()
{
    int n;
    for( ; ; )
    {
        scanf("%d", &n);

        printf("%d\n", factorial(n));
    }


    return 0;
}
