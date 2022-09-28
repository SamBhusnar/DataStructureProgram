#include <stdio.h>
int myfunc(int arr[])
{
    for (int i = 0; i < 10; i++)
    {
        printf("These is %d element of array is %d\n", i, *(arr + i));
    }
    for (int i = 0; i < 10; i++)
    {
        arr[i] = i;
    }
    return 0;
}
int main()
{
    printf("We give array to function\n");
    int arr[] = {111, 32, 34, 44, 45, 46, 47, 48, 49, 40};
    myfunc(arr);
    for (int i = 0; i < 10; i++)
    {
        printf("The %d is value of array element %d\n", i, arr[i]);
    }
    return 0;
}