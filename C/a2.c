#include <stdio.h>

int main()
{
    int a = 65;
    char b = 'M';
    float c = 20.25;
    double d = 21.36598745;

    printf("For Integer %d\n", a);
    printf("Character : %c\n", a);
    printf("Floating point : %f\n", a);
    printf("Double : %lf\n\n", a);


    printf("For Character %c\n", b);
    printf("Integer : %d\n", b);
    printf("Floating point : %f\n", b);
    printf("Double : %lf\n\n", b);


    printf("For Floating Point %f\n", c);
    printf("Integer : %d\n", c);
    printf("Character : %c\n", c);
    printf("Double : %lf\n\n", c);


    printf("For Double %lf\n", d);
    printf("Integer : %d\n", d);
    printf("Character : %c\n", d);
    printf("Floating point : %f\n", d);

    return 0;
}
