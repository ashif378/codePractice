#include <stdio.h>

int main()
{
    int n, cnt=1;

    scanf("%d", &n);
    ll: if (n == 1){
        printf("%d", cnt);
        return 0;
    }
    if(n%2 != 0){
        n = 3*n+1;
    }
    else {
        n = n/2;
    }
    cnt = cnt + 1;
    goto ll;

}
