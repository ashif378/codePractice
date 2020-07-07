#include <stdio.h>

int main()
{
   int n, t, sum = 0, remainder;

   printf("Enter an integer\n");
   while(scanf("%d", &n) == 1){

   //t = n;

   while (n != 0)
   {
      remainder = n % 10;
      sum       += remainder;
      n         = n / 10;

   }

   printf("Sum of digits of %d = %d\n", n, sum);
   sum = 0;
   }

   return 0;
}
