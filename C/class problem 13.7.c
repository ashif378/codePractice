#include <stdio.h>

int main()
{
    int n, i, j, k=0, l;

    scanf("%d", &n);

    int a[n];

    for(i=0; i<n; i++){
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++){
            printf("\n");
            k++;
        for(j=0; j<n; j++){
            if(a[j] == i+1){
                a[j] = 0;
                i++;
            }
        }
        for(l=0; l<n; l++){
        printf("%d ", a[l]);
        }
        i--;
    }

    printf("\n\n%d\n", k);

    return 0;
}
