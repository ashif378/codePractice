#include <stdio.h>
#include <string.h>


int main()
{
    int semester, course;
    int i, j;
    printf("How many semester's result do you want to count?\n");
    scanf("%f", &semester);

    for(i=0; i<semester; i++){
            printf("Semester %d :", i+1);
            printf("How many courses do you have?\n");
            scanf("%d", &course);
            for(j=0; j<course; j++){
                char cname[100];
                float marks[j], credit[j];

                printf("Enter course code: ");
                gets(cname);

                printf("Enter obtained marks: ");
                scanf("%f", &marks[j]);
                printf("Enter course credit: ");
                scanf("%f", &credit[j]);


            }
    }
return 0;
}
