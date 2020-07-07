#include <stdio.h>
#include <string.h>

int main() {
    int T, i, j, m;
    char s[100000];

    scanf("%d", &T);
    getchar();

    for(j=0; j<T; j++){
        gets(s);

        m = strlen(s);

    for(i=0; i<m; i++){
        if(i%2 == 0){
            printf("%c", s[i]);
        }
    }

    printf(" ");

    for(i=0; i<m; i++){
        if(i%2 != 0){
            printf("%c", s[i]);
        }
    }
    printf("\n");
    }


    return 0;
}
