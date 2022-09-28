#include <stdio.h>
int main()
{
    int *ptr ;
    // ptr = (int *)malloc(8 * sizeof(int));
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("Enter value\n");
    //     int x;
    //     scanf("%d", &x);
    // }
    // free(ptr);
    // for (int i = 0; i < 8; i++)
    // {
    //     printf("The value of %d is %d\n", i, ptr[i]);
    // }
    // using dynamic memory allcation we creat array in heap?
    {
        int x,y;
        int a=4;;
        ptr=&a;
    }
    printf("The dagling pointer is %d \n", ptr);
    return 0;
}