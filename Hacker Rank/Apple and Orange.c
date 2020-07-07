#include <stdio.h>

int main()
{
    int s, t, a, b, m, n, i, d, k=0, l=0;

    scanf("%d %d", &s, &t);
    scanf("%d %d", &a, &b);
    scanf("%d %d", &m, &n);

    int mm[m], nn[n];

    for(i=0; i<m; i++){
        scanf("%d", &mm[i]);
    }
    for(i=0; i<n; i++){
        scanf("%d", &nn[i]);
    }

    for(i=0; i<m; i++){
        d = a + mm[i];
        if(d >= s && d <= t){
            k++;
        }
    }
    for(i=0; i<n; i++){
        d = b + nn[i];
        if(d >= s && d <= t){
            l++;
        }
    }
    printf("%d\n%d", k, l);

    return 0;
}
