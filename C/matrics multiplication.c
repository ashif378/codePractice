#include <stdio.h>

int main()
{
    int i, j, k, m, n, o, p, sum=0;
    int first[10][10], second[10][10], multiplication[10][10];

    printf("Enter the number of rows and columns of first matrix: ");
    scanf("%d %d", &m, &n);
    printf("Enter the elements of 1st matrix: \n");

    for(i=0; i<m; i++){
        for(j=0; j<n; j++){
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter the number of rows and columns of second matrix: ");
    scanf("%d %d", &o, &p);

    if(n == o){
        for(i=0; i<o; i++){
        for(j=0; j<p; j++){
            scanf("%d", &second[i][j]);
        }
        }
    }
    else{
            printf("Wrong Input");
            return 0;
        }

    for(i=0; i<m; i++){
        for(j=0; j<p; j++){
            for(k=0; k<o; k++){
                sum += first[i][k]*second[k][j];
            }
            multiplication[i][j] = sum;
                sum = 0;
        }
    }

    for(i=0; i<m; i++){
        for(j=0; j<p; j++){
            printf("product of the matrix is: \n%d ", multiplication[i][j]);
        }
        printf("\n");
    }


    return 0;
}
