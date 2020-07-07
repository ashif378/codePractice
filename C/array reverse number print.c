#include <stdio.h>

int main()
{
    int N, i;
    scanf("%d", &N);
    int A[N];
    for(i=0; i<N; i++){
        scanf("%d", &A[i]);
    }
    for(i=(N-1); i>=0; i--){
        printf("%d ", A[i]);
    }
    return 0;
}
