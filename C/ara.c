#include <stdio.h>

int main()
{
    int i, j, ban[5]={84,86,57,68,62}, eng[5]={74,84,65,95,81}, mat[5]={84,75,96,81,72};
    float fin[5];

    for(i=0; i<5; i++){
        fin[i] = (ban[i]/3)+(eng[i]/3)+(mat[i]/6);

        printf("%d \t%g\n", i+1, fin[i]);
    }




    return 0;
}
