#include <stdio.h>

int main()
{
    int i, j, k=1;

    for(i=1; i<=5; i++){
            printf("\n");
        for(j=1; j<i; j++)
            printf("%d", k++);
    }


    return 0;
}
