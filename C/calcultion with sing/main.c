#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a, b, c, i, j, k;
    char d='+', e='-', f='*', g='/', h='=';

    printf("Please enter a number: ");
    scanf("%f", &a);
    printf("Now enter another number: ");
    scanf("%f", &b);

    c=a+b;
    printf("\n\nSummation is: %g %c %g %c %g", a, d, b, h, c);

    i=a-b;
    printf("\n\nSubtraction is: %g %c %g %c %g", a, e, b, h, i);

    j=a*b;
    printf("\n\nMultiplication is: %g %c %g %c %g", a, f, b, h, j);

    k=a/b;
    if( b!=0)
    printf("\n\nQuotient is: %g %c %g %c %g\n\n\n", a, g, b, h, k);
    else printf("\n\nError!! Cannot divide by zero");


    return 0;
}
