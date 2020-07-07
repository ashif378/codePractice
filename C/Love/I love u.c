#include<stdio.h>
int main()
{
       char ch;
       char a[20][20];                  /*   2D array declaration   */
       printf("enter i or I");
       scanf(" %c",&ch);              /*  read input     */
       printf("\n\n\n");                  /* for new lines (optional)   */
       int i,j,k;
       switch(ch)
       {
             case 'I':
             case 'i':
                            for(i=0;i<8;i++){             /*   for every row   */
                            if(i==0||i==7){                 /* if row is either 1st or last   */
                            for(j=0;j<11;j++)             /* for every column   */
                            printf("\x03");                  /* print love symbol   */
                            printf("\n");
                             }
                            else{                                 /* if row is neither 1st nor last   */
                            printf("     \x03\n");
                            }
                            }
                            printf("\n\n\n");                /* after printing I, new lines   */

            case 'L':   for(i=0;i<10;i++)              /* 1st store love symbol in all element spaces  */
                           {
                                for(j=0;j<12;j++){
                                a[i][j]='\x03';
                                }
                           }
                          for(i=0;i<2;i++)          /* replace some of the above symbols with white spaces */
                         a[i][5]=' ';                     /* top space   */
                         for(i=2;i<10;i++)         /* left spaces   */
                         {
                               for(j=0;j<i-1;j++)
                               a[i][j]=' ';
                        }
                        for(i=2;i<10;i++){       /* right spaces   */

                            for(j=10;j>11-i;j--)
                            a[i][j]=' ';
                        }
                        for(i=0;i<10;i++){          /*  print */
                            for(j=0;j<11;j++)
                            printf("%c",a[i][j]);
                            printf("\n");
                        }
 case 'U':          for(i=0;i<8;i++){                      /* for every row   */
                         if(i!=7)                                      /* if its not last row   */
                               printf("\x03         \x03");
                        else{                                             /*   if its last row   */
                              for(j=0;j<11;j++)
                              printf("\x03");
                              }
                       printf("\n");
                       }

         }

 return 0;
 }
