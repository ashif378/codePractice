#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    double A, B, C, s, area;
    int i, T;

    scanf("%d", &T);

    for(i=1; i<=T; i++){


    scanf("%lf %lf %lf", &A, &B, &C);

    if (B+C>=A && A+C>=B && A+B>=C){

    s = ((A+B+C)/2);
    area = sqrt(s*(s-A)*(s-B)*(s-C));

    printf("Case %d: %lf\n", i, area);


    }
    }

    return 0;
}

