#include <stdio.h>
int sam(int *ptr)
{
    for (int i = 0; i < 6; i++)
    {
        printf("the value of %d these is %d\n", i, *(ptr + i));
    }
    *(ptr + 0) = 1;
    *(ptr + 1) = 11;
    *(ptr + 2) = 111;
    *(ptr + 3) = 1111;
    *(ptr + 4) = 11111;
    *(ptr + 5) = 111111;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    sam(arr);
    printf("The value is after function run is \n");
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d is these %d\n", i, arr[i]);
    }
    return 0;
}