#include <stdio.h>

int main()
{
    int a = 70;
    float b = 65.359;
    double c = 84.36952368;
    char d = 'L';

    printf("The size of integer type data is \t%d\n", sizeof(a));
    printf("The size of floating point type data is %d\n", sizeof(b));
    printf("The size of double type data is \t%d\n", sizeof(c));
    printf("The size of character type data is \t%d\n", sizeof(d));

    return 0;
}
