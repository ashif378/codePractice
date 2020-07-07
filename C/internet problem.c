#include <stdio.h>

int main()
{
    int X, N, i, p1=0, r;
    scanf("%d", &X);
    scanf("%d", &N);
    int P[N];

    for(i=0; i<N; i++)
    {
        scanf("%d", &P[i]);
        p1 += P[i];
    }

    r = ((X*N)-p1)+X;

    printf("%d", r);

    return 0;
}
