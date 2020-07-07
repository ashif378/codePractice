#include <stdio.h>

int main()
{
    int T, n, i, j, k=0, l, m[100];
    FILE *fp;
    fp = fopen("input.txt", "r");
    fscanf(fp, "%d", &T);
    for(i=0; i<T; i++){
        fscanf(fp, "%d", &n);
            for(j=0; j<n; j++){
                fscanf(fp, "%d", &m[j]);
            }

            if(m[j] < m[j+1]){
                k++;
            }
            else if(m[j] > m[j+1]){
                k--;
            }

            if(k>0){
                printf("Good Day\n");
            }
            else if(k<0){
                printf("Bad Day\n");
            }
            else if(k == 0){
                printf("Neutral\n");
            }
    k = 0;

        }


    return 0;
}
