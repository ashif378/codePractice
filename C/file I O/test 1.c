#include <stdio.h>

int main()
{
    int i, j, t, n, s = 0, sum[1000], a[1000];
    FILE *fp, *pf;

    fp = fopen("test.txt", "r");
    pf = fopen("output.txt", "w");

    fscanf(fp, "%d", &t);
    for(i=0; i<t; i++){
        fscanf(fp, "%d", &n);
        for(j=0; j<n; j++){
            fscanf(fp, "%d", &a[j]);
            s += a[j];
        }
        sum[i] = s;
        s = 0;
    }

    for(i=0; i<t; i++){
        fprintf(pf, "%d ", sum[i]);
    }

    fclose(fp);
    fclose(pf);


    return 0;
}
