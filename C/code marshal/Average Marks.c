#include <stdio.h>

int main()
{
    int a, b, i, mul;

    scanf("%d %d", &a, &b);

    for(i=1; i<=b; i++){
        mul=a*i;
        printf("%d X %d = %d\n", a, i, mul);
    }


    return 0;
}
