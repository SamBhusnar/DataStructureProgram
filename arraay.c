#include <stdio.h>
void sam(int *d, int *a)
{
    int temp = *d;
    *d = *a;   // 3
    *a = temp; // 4
}
int main()
{
    int a = 4, b = 3;
    printf("The value of a  and b is %d %d\n", a, b);
    sam(&a, &b);
    printf("The value of a  and b is %d %d\n", a, b);

    return 0;
}