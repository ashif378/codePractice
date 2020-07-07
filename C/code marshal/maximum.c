#include <stdio.h>

int main()
{
    int a, b, c, i, t, m;

    scanf("%d", &t);
    for (i=1; i<=t; i++){

        scanf("%d %d %d", &a, &b, &c);

    if(a>=b && a>=c){
        m=a;
    }

    else if(b>=a && b>=c){
        m=b;
    }

    else if(c>=a && c>=b){
        m=c;
    }
    printf("Case %d: %d\n", i, m);
    }

    return 0;
}
