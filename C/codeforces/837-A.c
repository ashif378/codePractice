#include <stdio.h>

int main()
{
    int i, n, k=0;
    scanf("%d", &n);
    char a[n];

    for(i=0; i<=n; i++){
        scanf("%c", &a[i]);

        if(a[i] >= 'A' && a[i] <= 'Z'){
            k++;
        }
    }

    printf("%d", k);

    return 0;
}
