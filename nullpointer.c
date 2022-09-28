#include <stdio.h>
int main()
{
    // int x = 4;
    // int *s = NULL;                                   // null pointer
    // printf("The null pointer is %d\n", s);           // adress of varaible
    // printf("The adress of s pointer is %d\n", &s);   // adress of pointer
    // printf("we can not dereference it is %d\n", *s); // we can not dereference it is
    // s = &x;                                          // it give's run time error
    // printf("The valu e of s is %d\n", s);
    // printf("The adress of x is %d\n", s);
    // printf("The value of x is %d\n", x);%";
    int a;
    a = 4;
    int *ptr=&a;
    if (ptr != NULL)
    {
        printf("The value of a is %d\n", *ptr);
    }
    else
    {
        printf("The pointer is null pointer can not dereferenc it\n");
    }
    return 0;
}
// zero mean null value of null is null in these compiler
