#include <stdio.h>

int main()
{
    int T, N, M, i, a[100], j, sum=0;

    scanf("%d", &T);

    for(j=0; j<T; j++){
    scanf("%d", &M);
    scanf("%d", &N);

    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
        sum += a[i];
    }

    M >= sum ? printf("Go for shopping\n") : printf("You don't have enough money\n");

    sum =0;

    }



    return 0;
}
