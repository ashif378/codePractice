#include <stdio.h>

int main()
{
    FILE *fp;
    char filename[] = "my_file.txt";

    fp = fopen(filename, "w");

    fprintf(fp, "This is file created by my program. ");
    fprintf(fp, "I am not so happy.\n");

    fclose(fp);

    fp = fopen(filename, "a");
    fprintf(fp, "This is the second line.");
    fclose(fp);


    return 0;
}
