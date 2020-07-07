#include <stdio.h>

int main()
{
    int i, j, k, l, o, n, p, q, r;
    scanf("%d", &n);
    n=n/2;

    for(i=0; i<n; i++){
            printf("\n");
        for(j=n; j>i; j--){
            printf("* ");
        }

        for(k=0; k<i*2; k++){
            printf("  ");
        }
        for(l=i; l<n; l++){
            printf("* ");
        }
    }
        printf("\n");
    for(i=0; i<n; i++){
        for(o=0; o<=i; o++){
            printf("* ");
        }
        for(r=i+1; r<n; r++){
            printf("  ");
        }
        for(p=i+1; p<n; p++){
            printf("  ");
        }
        for(q=0; q<=i; q++){
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}
