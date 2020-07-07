#include <stdio.h>

float eqn1(float a, float b)
{
    float p;
    p = 2*b - 2*a;
    return p;
}

float eqn2(float w, float x, float y, float z)
{
    float q;
    q = x*x + z*z - w*w - y*y;
    return q;
}

int main()
{
    float g1, g2, f1, f2, x1, x2, y1, y2, m1, m2, m3;

    printf("Enter the value of g1: ");
    scanf("%f", &g1);
    printf("\nEnter the value of f1: ");
    scanf("%f", &f1);
    printf("\nEnter the value of g2: ");
    scanf("%f", &g2);
    printf("\nEnter the value of f2: ");
    scanf("%f", &f2);

    x1=g1; x2=g2; y1=f1; y2=f2;

    m1 = eqn1(x1, x2);
    m2 = eqn1(y1, y2);
    m3 = eqn2(x1, x2, y1, y2);

    if(x1 != x2 && y1 != y2){
    printf("\n\nThe equation of the line is: %gx", m1);
        if(m2 > 0){
            printf(" + %gy = %g\n", m2, m3);
        }
        else printf("%gy = %g\n", m2, m3);
    }

    else if(x1 == x2 && y1 != y2){
        printf("\n\nThe equation of the line is: %gy = %g\n\n", m2, m3);
    }
    else if(y1 == y2 && x1 != x2){
        printf("\n\nThe equation of the line is: %gx = %g\n\n", m1, m3);
    }
    else if(x1 == x2 && y1 == y2){
        printf("\n\nThe two circles are same.\n\n");
    }

    return 0;
}
