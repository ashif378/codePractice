#include <stdio.h>

int main()
{
   int Value1, Value2, Sum;
   float Avg;

   printf("\nEnter Value1:");
   scanf("%d", &Value1);
   printf("\nEnter Value2:");
   scanf("%d", &Value2);

   Sum=Value1+Value2;
   Avg=(float)Sum/2;

   printf("\nSum =%d", Sum);
   printf("\nAverage =%.2f", Avg);

    return 0;
}
