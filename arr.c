#include <stdio.h>
int sam(int arr[])
{
    for (int i = 0; i < 6; i++)
    {
        printf("The value of %d is these %d\n", i, arr[i]);
    }
    arr[0] = 4;
    arr[1] = 44;
    arr[2] = 444;
    arr[3] = 4444;
    arr[4] = 44444;
    arr[5] = 444444;
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