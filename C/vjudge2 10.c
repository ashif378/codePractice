#include <stdio.h>

int main()
{
    int a;

    while(scanf("%d", &a)==1){
        if(a%100 != 0 && a%4==0 || a%400==0){
                if(a%55==0){
           printf("This is leap year.\nThis is bulukulu festival year.\n\n");
        }
        else printf("This is leap year.\n\n");
        }
        else if(a%15==0){
            printf("This is huluculu festival year.\n\n");
        }
        else printf("This is ordinary year.\n\n");

    }


    return 0;
    }
