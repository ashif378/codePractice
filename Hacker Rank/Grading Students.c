#include <stdio.h>

int main()
{
    int i, n, grade;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &grade);
        if(grade >= 38 && grade <= 100){
            if(grade % 5 == 3){
                printf("%d\n", grade+2);
            }
            else if(grade % 5 == 4){
                printf("%d\n", grade+1);
            }
                else{
                    printf("%d\n", grade);
            }
        }
        else
            printf("%d\n", grade);
    }

    return 0;
}
