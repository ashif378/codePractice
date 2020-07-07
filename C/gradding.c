#include <stdio.h>

int main()
{
    int N, X, i;
    scanf("%d", &N);
    for(i=1; i<=N; i++){
        scanf("%d", &X);
        if(X<=100 && X>=90){
            printf("Student %d: A+\n", i);
        }
        else if(X<=89 && X>=80){
            printf("Student %d: A\n", i);
        }
        else if(X<=79 && X>=70){
            printf("Student %d: A-\n", i);
        }
        else if(X<=69 && X>=60){
            printf("Student %d: B\n", i);
        }
        else if(X<=59 && X>=50){
            printf("Student %d: B-\n", i);
        }
        else if(X<=49 && X>=40){
            printf("Student %d: C\n", i);
        }
        else if(X<=39 && X>=35){
            printf("Student %d: D\n", i);
        }
        else if(X<=34 && X>=0){
            printf("Student %d: F\n", i);
        }
        }
        return 0;
    }

