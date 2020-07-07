#include <stdio.h>

int main()
{
    int year;

    while(scanf("%d", &year) != EOF)
    {
        int i=0;
        if(year % 4 == 0 && year % 100 != 0 || year % 400 == 0)
        {
            printf("This is leap year.\n");
            i++;
        }

        if(year % 15 == 0)
        {
            printf("This is huluculu festival year.\n");
            i++;
        }

        if(year % 55 == 0)
        {
            printf("This is Bulukulu festival year.\n");
            i++;
        }

        if(i == 0)
        {
            printf("This is an ordinary year.\n");
        }
    }

    return 0;


}
