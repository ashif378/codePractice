#include <stdio.h>

int main()
{
int T,A,B,C,M;
scanf("%d",&T);
int i;
for(i=1;i<=T;i++)
{
scanf("%d%d%d",&A,&B,&C);
M=A;
if(M<B)
{
M=B;
if(M<C)
{
M=C;
}
}
if(M<C)
{
M=C;
if(M<B)
{
M=B;
}
}
printf("Case %d: %d\n",i,M);

}
return 0;
}
