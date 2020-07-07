#include <stdio.h>

int main()
{
    int N, i, j, z = 0, y=0;
    scanf("%d", &N);
    int a[N][N];
    for(i=0; i<N; i++){
        for(j=0; j<N; j++){
            scanf("%d", &a[i][j]);
        }
    }

    for(i=0, j=0; i<N; i++, j++){
        z = z + a[i][i];
    }

    for(i=0, j=N-1; i<N; i++, j--){
        y = y + a[i][j];
    }

    printf("%d", abs(z-y));

    return 0;
}
