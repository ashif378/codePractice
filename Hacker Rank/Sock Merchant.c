#include <stdio.h>

int main()
{
    int n, c[100], i, j, k=0;

    for(i=0; i<n; i++){
        scanf("%d", &c[i]);
    }

    for(j=0; j<n; j++){
            for(i=0; i<n; i++){
        if(c[j] == c[i+1]){
            k++;

        }
    }
    }


    return 0;
}
