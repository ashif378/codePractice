#include <stdio.h>

int main()
{
    int n, i;

    while(scanf("%d", &n) == 1){
    long int fac = 1;
     if(n<0){
        printf("Invalid !!\n");
     }
     else if(n == 0){
        printf("Factorial is 1\n");
     }
     else if(n>0){
        for(i=1; i<=n; i++){
            fac *= i;
        }
        printf("Factorial is %d\n", fac);
     }
    }
}
