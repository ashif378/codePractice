/*Celcius to Farenheit*/
#include <stdio.h>

int main()
{
    float C, F;

    printf("Enter temparature in Celcius: ");
    scanf("%f", &C);

    F=9*C/5+32;

    printf("The temparature in Farenheit is: %.2f", F);

    return 0;
}
