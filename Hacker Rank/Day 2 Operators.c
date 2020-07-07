#include <stdio.h>
#include <math.h>

int main()
{
    int tip, tax;
    double meal, total, tip1, tax1;

    scanf("%lf %d %d", &meal, &tip, &tax);

    tip1 = (double)tip;
    tax1 = (double)tax;

    tip1 = meal*(tip1/100);
    tax1 = meal*(tax1/100);

    total = meal + tip1 + tax1;

    total = round(total);

    printf("The total meal cost is %d dollars.", (int)total);

    return 0;
}
