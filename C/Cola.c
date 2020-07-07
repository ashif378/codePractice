#include <stdio.h>

int main()
{
    int cola, get;
    while(scanf("%d",&cola)==1)
    {
        get=cola;
            while(cola>=3)
            {

                cola=cola-2;
                get+=1;
            }

        if(cola==2)
            get+=1;
        printf("%d\n",get);
    }
    return 0;
}
