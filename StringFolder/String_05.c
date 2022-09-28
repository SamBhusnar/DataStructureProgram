#include<stdio.h>
#include<string.h>
int main(){
    printf("We are going to see few string in build function\n");
    char *ptr="sangolaColleg%sangola";
    char ptr2[]="%ssamadhan";
    // puts(ptr);// ----> better way to use this function
    // printf("%s",ptr2);// we not got new line
    // printf("sangolaCollege%sangola");
    puts("sangolaCollege%sangola");
    getchar();

    return 0;
}