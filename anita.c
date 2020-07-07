#include <stdio.h>

int main()
{
    int T, n, i, j, k=0, l, m[100];
    FILE *fp, *fp1;

    fp = fopen("input.txt", "r");
    fp1 = fopen("output.txt", "w");

    fscanf(fp, "%d", &T);
    for(i=0; i<T; i++){
        fscanf(fp, "%d", &n);
            for(j=0; j<n; j++){
                fscanf(fp, "%d", &m[j]);
            }

            for(l=0; l<n-1; l++){
				if(m[l] < m[l+1]){
                k++;
            }
            else if(m[l] > m[l+1]){
                k--;
            }

			}

            if(k == n-1){
                fprintf(fp1, "All Good Days.\n\n");
            }
            else if(k == -(n-1)){
                fprintf(fp1, "All Bad Days.\n\n");
            }
            else if(k > 0){
                fprintf(fp1, "Good Day.\n\n");
            }
            else if(k < 0){
                fprintf(fp1, "Bad Day.\n\n");
            }
            else if(k == 0){
                fprintf(fp1, "Neutral.\n\n");
            }
    k = 0;


        }
        fclose(fp);
        fclose(fp1);


    return 0;
}

