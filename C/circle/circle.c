#include <stdio.h>

int main()
{
    float g1, f1, c1, g2, f2, c2;

    printf("Enter the value of g1: ");
    scanf("%f", &g1);
    printf("\nEnter the value of f1: ");
    scanf("%f", &f1);
    printf("\nEnter the value of g2: ");
    scanf("%f", &g2);
    printf("\nEnter the value of f2: ");
    scanf("%f", &f2);

    /*printf("\nEnter the value of c1: ");
    scanf("%f", &c1);
    printf("\nEnter the value of c2: ");
    scanf("%f", &c2);*/

    //g1=-g1; g2=-g2;
    //f1=-f1; f2=-f2;


    if(g1 != g2 && f1 != f2){
    printf("\n\nThe equation of the line is: %gx ", 2*g2-2*g1);
        if(2*f2-2*f1 > 0){
            printf("+ %gy = %g\n", 2*f2-2*f1, g2*g2+f2*f2-g1*g1-f1*f1);
        }
        else printf("%gy = %g\n", 2*f2-2*f1, g2*g2+f2*f2-g1*g1-f1*f1);
    }

    else if(g1 = g2 && f1 != f2){
        printf("\n\nThe equation of the line is: %gy = %g\n\n", 2*f2-2*f1, g2*g2+f2*f2-g1*g1-f1*f1);
    }
    else if(f1 = f2 && g1 != g2){
        printf("\n\nThe equation of the line is: %gx = %g\n\n", 2*g2-2*g1, g2*g2+f2*f2-g1*g1-f1*f1);
    }

    return 0;
}
