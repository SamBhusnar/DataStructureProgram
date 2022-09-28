#include <stdio.h>
int myfunc(int *ptr)
{
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            *(*(ptr + i) + j) = i;
        }
    }
// these programe give some error to access two dimentional array using pointer
// in function so try it after few hour

    return 0;
}
int main()
{
    printf("We are write program to pass multidimentional array as argument to functionl\n");
    int arr[2][4];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    myfunc(arr);

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}