#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);

    long long int A[N], sum=0;

    for(i=0; i<N; i++){
        scanf("%lld", &A[i]);
        sum += A[i];
    }

    printf("%lld", sum);

    return 0;
}
