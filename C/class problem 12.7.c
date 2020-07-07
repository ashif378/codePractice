#include <stdio.h>

int main()
{
    int T, i, j, k=0, m, a;

    scanf("%d", &T);

    int mm[T];

    for(i=0; i<T; i++){
        scanf("%d", &m);
        mm[i] = m;
        int a[m];
        for(j=0; j<m; j++){
            scanf("%d", &a[j]);
        }
    }

    for(i=0; i<(T-1); i++){

        if(mm[i] - mm[i+1] == -2)
            k++;
    }

    if(k == (T-1)){
        printf("\nYes, with the numbers pyramid shape can be built.\n");
    }
    else {
        printf("\nNO, with the numbers pyramid shape cannot be built.\n");
    }

    return 0;
}
