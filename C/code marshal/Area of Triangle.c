#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;
    int i, t;

    scanf("%d", &t);

    for(i=1; i<=t; i++){
            printf("Case %d : ", i);

    scanf("%f %f %f", &a, &b, &c);

    if (a == b == c){
        area = (sqrt(3)*a*a)/3;
    }
    else if (a == b){
        area = (c/4)*sqrt(4*a*a-c*c);
    }
    else if (a == c){
        area = (b/4)*sqrt(4*a*a-b*b);
    }
    else if (b == c){
        area = (a/4)*sqrt(4*b*b-a*a);
    }
    else{
        s = (a+b+c)/2;
        area = sqrt(s*(s-a)*(s-b)*(s-c));
    }
    printf("%g\n", area);
    }


    return 0;
}
