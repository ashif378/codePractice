#include <stdio.h>

int main()
{
    int a, b, t, i;
    char c;
    scanf("%d", &t);
    for(i=1; i<=t; i++){
            scanf("%d %d", &a, &b);
        if(a>b){
            c='>';
        }
        else if(a<b){
            c = '<';
        }
        else if(a=b){
            c='=';
        }
        printf("%c\n", c);
    }

    return 0;
}
