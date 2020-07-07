#include <stdio.h>

int main()
{
    int i, j, n, c[100], k=0;

    scanf("%d", &n);

    for(i=0; i<n; i++){
        scanf("%d", &c[i]);
    }

    for(i=0; i<n; i++){
        for(j=i; j<n; j++){
            if(c[i] == c[j+1]){
                k++;
            }
        }
    }



    return 0;
}
