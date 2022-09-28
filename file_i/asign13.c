// 13.  Write a program to find the size of int, char, float, double.
#include <stdio.h>
int main()
{

    printf(" int datatype           :%d\n", sizeof(int));
    printf("float datatype          :%d\n", sizeof(float));
    printf("char datatype           :%d\n", sizeof(char));
    printf("long datatype           :%d\n", sizeof(long));
    printf("double datatype         :%d\n", sizeof(double));
    printf("signed char datatype    :%d\n", sizeof(signed char));
    return 0;
}