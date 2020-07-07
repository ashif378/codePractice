#include <stdio.h>

int main()
{
    int t1, t2, t, n, i;

    scanf("%d %d %d", &t1, &t2, &n);

    for(i=0; i<n-2; i++){
        t = t1 + (t2*t2);
        t1 = t2;
        t2 = t;
    }

    printf("%d", t);

    return 0;
}
