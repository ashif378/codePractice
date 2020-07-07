#include <stdio.h>
void rec(int i);

int main()
{
    rec(0);
    return 0;
}

void rec(int i)
{
    if(i<10){
        rec(i+1);
        printf("%d ", i);
    }
}
