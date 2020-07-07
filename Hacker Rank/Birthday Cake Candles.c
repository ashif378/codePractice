#include <stdio.h>

int main()
{
    int n, i, tall, k=0;
    scanf("%d", &n);
    int height[n];
    for(i=0; i<n; i++){
        scanf("%d", &height[i]);
    }

    tall = height[0];
    for(i=0; i<n; i++){
        if(tall < height[i]){
            tall = height[i];
        }
    }
    for(i=0; i<n; i++){
        if(tall == height[i])
            k++;
    }

    printf("%d", k);

    return 0;
}
