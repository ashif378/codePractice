#include <stdio.h>

int main()
{
    int N, i, m=0, n=0, o=0;
    scanf("%d", &N);
    int a[N];
    for(i=0; i<N; i++){
        scanf("%d", &a[i]);
        if(a[i] > 0){
            m++;
        }
        else if(a[i] < 0){
            n++;
        }
        else if(a[i] == 0){
            o++;
        }
    }

    printf("%f\n%f\n%f",(float)m/N, (float)n/N, (float)o/N);

    return 0;
}
