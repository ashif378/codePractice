#include <stdio.h>

int main()
{
    int T, N, i, j, k;

    scanf("%d", &T);
    for(i=1; i<=T; i++){
        scanf("%d", &N);
        int a[N];
        for(j=1; j<=N; j++){
        scanf("%d", &a[j]);
        }
        int max = a[0], cnt=0;
        for(k=1; k<N; k++){
            if(a[k] >= max){
                max = a[k];
                ++cnt;
            }
        }
        printf("Case %d: %d %d\n", i, max, cnt);

    }

    return 0;
}
