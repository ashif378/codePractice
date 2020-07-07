#include <stdio.h>

int main()
{
    int n, k, max, i, m;
    scanf("%d %d", &n, &k);
    int h[n];

    for(i=0; i<n; i++){
        scanf("%d", &h[i]);
    }

    max = h[0];
    for(i=0; i<n; i++){
        if(h[i] >= max){
            max = h[i];
        }
    }

    m = max - k;

    if(m > 0){
        printf("%d", m);
    }
    else
        printf("0");

    return 0;
}
