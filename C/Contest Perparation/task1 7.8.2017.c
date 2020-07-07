#include <stdio.h>

int main()
{
    int g=0, b, T, n, i, j;

    scanf("%d", &T);

    for(i=0; i<T; i++){
        scanf("%d", &n);
        int a[n];
        for(j=0; j<n; j++){
            scanf("%d", &a[j]);
        }

        for(j=0; j<n-1; j++){
            if(a[j] == a[j+1]){
                g++;
                break;
            }
        }
    }

    b = T - g;

    if(g >= b){
        printf("\nGood Input\n");
    }
    else
        printf("\nBad Input\n");

    return 0;
}
