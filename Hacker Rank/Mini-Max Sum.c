#include <stdio.h>

int main()
{
    long long int a1, a2, a3, a4, a5, b[5], max, min;
    int i;

    scanf("%lld %lld %lld %lld %lld", &a1, &a2, &a3, &a4, &a5);

    b[0] = a2+a3+a4+a5;
    b[1] = a1+a3+a4+a5;
    b[2] = a1+a2+a4+a5;
    b[3] = a1+a2+a3+a5;
    b[4] = a1+a2+a3+a4;

    max = b[0];
    for(i=0; i<5; i++){
        if(b[i] > max){
            max = b[i];
        }
    }

    min = b[0];
    for(i=0; i<5; i++){
        if(min > b[i]){
            min = b[i];
        }
    }

    printf("%lld\n", b[0]);
    printf("%lld\n", b[1]);
    printf("%lld\n", b[2]);
    printf("%lld\n", b[3]);
    printf("%lld\n", b[4]);

    printf("%lld %lld", min, max);

    return 0;
}
