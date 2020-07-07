#include <stdio.h>
#include <stdlib.h>

int main()
{
    char ch;
    float a, b, sol;



    printf("Enter a number: ");
    scanf("%f", &a);

    printf("\nEnter another number: ");
    scanf("%f", &b);

    printf("\nEnter an operator: ");
    scanf(" %c", &ch);


    if (ch=='+'){
        sol=a+b;
        printf("%g %c %g = %g", a, ch, b, sol);
    }

    else if (ch=='-'){
        sol=a-b;
        printf("%g %c %g = %g", a, ch, b, sol);
    }

    else if (ch=='*'){
        sol=a*b;
        printf("%g %c %g = %g", a, ch, b, sol);
    }

    else if (ch=='/'){

        sol=a/b;
        printf("%g %c %g = %g", a, ch, b, sol);

        }

    return 0;
}
