#include <stdio.h>
#include <string.h>

int main(){
    char inputString[100];
    int index;
    printf("Enter a String\n");
    gets(inputString);
    printf("String with all uppercase characters \n%s ",
    strupr(inputString));

    getch();
    return 0;
}
