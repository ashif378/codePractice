#include <stdio.h>

int main()
{
    int i, j, k, max;

    scanf("%d %d", &i, &j);

    for(k = i; k<=j; k = i){

    ll: if (k == 1){
          i = i + 1;
    }

    else if(k%2 != 0){
        k = 3*k+1;
    }

    else{
            k = k/2;
        }


    while(i <= j){
    goto ll;
    }
    }

    printf("%d", );
    return 0;
}
