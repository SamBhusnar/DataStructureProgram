#include <stdio.h>
#include <string.h>
struct seventh
{
    int same;
    int same2;
    char same8;
    int same3;
    float same4;
    char same9;
    float same5;
    double same6;
    double same6_1;
    char same7;
} e;

int main()
{
    printf("I am doing some stuff with structure\n");
    e.same = 1;
    e.same2 = 2;
    e.same8 = '8';
    e.same3 = 3;
    e.same4 = 4;
    e.same5 = 5;
    e.same6 = 6;
    e.same6_1 = 6;
    e.same7 = '7';
    e.same9 = '9';
    printf("\n we are going to see index allocation of structure memeber by compiler or c\n");
    printf("same 1 int  : %d\n", &(e.same));
    printf("same 2 int  : %d\n", &(e.same2));
    printf("same 8 char : %d\n", &(e.same8));
    printf("same 3 int  : %d\n", &(e.same3));
    printf("same 4 float: %d\n", &(e.same4));
    printf("same 9 char : %d\n", &(e.same9));
    printf("same 5 float : %d\n", &(e.same5));
    printf("same 6 double : %d\n", &(e.same6));
    printf("same6_1 6_1 double : %d\n", &(e.same6_1));
    printf("same 7 char : %d\n", &(e.same7));

    return 0;
}