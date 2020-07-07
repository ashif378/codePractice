#include <stdio.h>

int main()
{
    int h, m, s;
    char c1, c2, sc1, sc2;

    scanf("%d%c%d%c%d%c%c", &h, &sc1, &m, &sc2, &s, &c1, &c2);


    if(c1 == 'A'){
            if(h == 12){
                h = 00;
            }

        printf("%02d%c%02d%c%02d", h, sc1, m, sc2, s);
    }
    else if(c1 == 'P'){
        if(h == 12){
            h = 12;
        }
        else {
            h = h + 12;
        }
        printf("%02d%c%02d%c%02d", h, sc1, m, sc2, s);
    }

    return 0;
}
