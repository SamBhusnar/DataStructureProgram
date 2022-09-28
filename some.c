#include <stdio.h>
int main()
{
    int a = 3;
    int *prt = &a;
    int *p =prt;
    printf("The adress of prt %d \n", p);
    printf(" The adress of prt %d \n", &prt);
    printf(" The value  of prt  is %d \n", *p);
    printf(" The value  of prt  is %d \n", prt);
    printf(" The adress  of a  is %d \n", &a);

    return 0;
}