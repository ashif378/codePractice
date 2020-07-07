#include <stdio.h>


int main()
{
    int N, b=0, a, c;

        while(scanf("%d", &N)==1){
        a=N+1;
        b = a/3;
        c = a%3;
        b += (b+c)/3;
        b = N+b;

        printf("%d\n", b);
        b=0;
        }

    return 0;
    }
