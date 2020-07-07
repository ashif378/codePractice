#include <stdio.h>

int main()
{
    int T, N=0, i, j=1, tot=0, avg;
    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &N);
        int a[N];
        for(j=1; j<=N; j++){
        scanf("%d", &a[N]);
        tot += a[N];
        }
        avg = tot / N;
        printf("Case %d: %d\n", i, avg);
        tot = 0;
        }
    return 0;
}
