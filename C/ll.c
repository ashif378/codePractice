#include <stdio.h>
#include <math.h>

int main()
{
    float x, y, z, r, s, circle, triangle, rest_area;

    printf("Enter the length of three sides of the field: ");
    scanf("%f %f %f", &x, &y, &z);

    printf("Enter the length of the rope: ");
    scanf("%f", &r);

    s = (x+y+z)/2;
    triangle = sqrt(s*(s-x)*(s-y)*(s-z));

    circle = (22/7)*r*r;

    rest_area = triangle - circle;

    printf("The area is %f square unit.", rest_area);

    return 0;
}
