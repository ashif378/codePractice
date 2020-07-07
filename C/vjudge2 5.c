#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T, a, b, i, j, sum=0;

    scanf("%d", &T);

    for(i=1; i<=T; i++){
        scanf("%d", &a);
        scanf("%d", &b);


        for(j=a; j<=b; j++){
            if(j%2 != 0){
                sum+=j;
            }

        }
        printf("Case %d: %d\n", i, sum);
        sum=0;
    }


}



