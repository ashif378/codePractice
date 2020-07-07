#include <stdio.h>

int main()
{
    int x1, x2, v1, v2, i;

    scanf("%d %d %d %d", &x1, &v1, &x2, &v2);

    if(x1 > x2){
        for(i=0; ; i++){
            x1 = x1 + v1;
            x2 = x2 + v2;
            if(x1 == x2){
                printf("YES");
                break;
            }
            else if(x2 > x1){
                printf("NO");
                break;
            }
        }
    }

    else if(x1 < x2){
        for(i=0; ; i++){
            x1 = x1 + v1;
            x2 = x2 + v2;
            if(x1 == x2){
                printf("YES");
                break;
            }
            else if(x2 < x1){
                printf("NO");
                break;
            }
        }
    }

    return 0;
}
