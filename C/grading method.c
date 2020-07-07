#include <stdio.h>

int main()
{
    int N, X, i;
    char c;

    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d", &X);

        if(X<=100 && X>=90){
            c='A+';
        }
        else if(X<=89 && X>=80){
            c='A';
        }
        else if(X<=79 && X>=70){
            c='A-';
        }
        else if(X<=69 && X>=60){
            c='B';
        }
        else if(X<=59 && X>=50){
            c='B-';
        }
        else if(X<=49 && X>=40){
            c='C';
        }
        else if(X<=39 && X>=35){
            c='D';
        }
        else if(X<=34 && X>=0){
            c='F';
        }
        printf("Student %d: %c\n", i, c);

        }
        return 0;
    }
