#include <stdio.h>

int main()
{
    int T, a, b, c, i, s;

    scanf("%d", &T);

    for(i=1; i<=T; i++){
    scanf("%d %d %d", &a, &b, &c);

        if(a<b && a>c || a<c && a>b){
            s=a;
        }
        else if(b>a && b<c || b>c && b<a){
            s=b;
        }
        else if(c>a && c<b || c>b && c<a){
            s=c;
        }

    printf("Case %d: %d\n", i, s);
    }
    return 0;
}


