#include <stdio.h>

int main()
{
    int V, n, i, j;
    scanf("%d %d", &V, &n);
    int ar[n];
    for(i=0; i<n; i++){
        scanf("%d", &ar[i]);
        if(V == ar[i]){
            j = i;
        }
    }
    printf("%d", j);

    return 0;
}
