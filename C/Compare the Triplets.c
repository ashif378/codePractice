#include <stdio.h>

int main()
{
    int a0, a1, a2, b0, b1, b2, i=0, j=0;
    scanf("%d %d %d", &a0, &a1, &a2);
    scanf("%d %d %d", &b0, &b1, &b2);


        if(a0>b0){
        i++;
    }
    else if(a0<b0){
        j++;
    }

    if(a1>b1){
        i++;
    }
    else if(a1<b1){
        j++;
    }

    if (a2>b2){
        i++;
    }
    else if(a2<b2){
        j++;
    }

    printf("%d %d", i, j);

    return 0;
}
