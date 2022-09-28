// This type of program known as pointer game with humans
#include <stdio.h>
int main()
{
    int marks[4];
    int a = 8;
    int *ptr2 = &a;
    printf("%d\n", ptr2);
    ptr2 += 2;
    *ptr2 = 44;
    printf("%d\n", a);
    // ptr2-=2;
    marks[1] = 88;
    printf("%d\n", *ptr2);
    // *marks=ptr2;
    printf("ptr2: %d\n", ptr2);
    printf("marks address: %d\n", marks);
    // marks=marks-1; ----> it give an pretty error

    printf("same: %d\n", marks[0]);
    printf("same: %d\n", *marks);
    printf("Address of array : %d\n", *marks);
    printf("Address of array line igonred this : %d\n", **(&marks));
    return 0;
}