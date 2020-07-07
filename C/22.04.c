#include <stdio.h>

int main()
{
    int i, j;

    for(i=1; i<20; i++){
        for(j=i; j<20; j++){
            printf("i = %d j = %d\n", i, j);
        }
    }


    return 0;
}
