#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, c, d, e, f, A, B, C, D, E;

    while(scanf("%d %d %d %d %d %d %d %d %d %d", &a,&b,&c,&d,&e,&A,&B,&C,&D,&E) != EOF)
    {
        if(a==A || b==B || c==C || d==D || e==E)
        {
            printf("N\n");
        }
        else
        {
            printf("Y\n");
        }
    }
    return 0;
}
