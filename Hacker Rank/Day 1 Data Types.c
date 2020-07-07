#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int i = 4, i1;
    double d = 4.0, d1;
    char s[] = "HackerRank ", s1[100];

    scanf("%d %lf", &i1, &d1);
    getchar();
    gets(s1);

    printf("%d\n%.1lf\n%s%s", i+i1, d+d1, s, s1);

    return 0;
}
