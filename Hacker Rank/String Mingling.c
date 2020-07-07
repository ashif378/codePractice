#include <stdio.h>
#include <string.h>

int main()
{
    char p[100000], q[100000], r[200000];
    int i, j, n;

    gets(p);
    getchar();
    gets(q);

    n = strlen(p);

    for(i=0; i<n; i++){
        printf("%c%c", p[i], q[i]);
    }

    return 0;
}
