#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    for (int i = 0; i < 7; i++)
    {
        printf("The array %d number value is :%d\n", i, arr[i]);
    }
for (int  i = 0; i < 7; i++)
{
    printf("The adress of %d is %d is same as %d\n",i,*(arr+i),*(&arr[i]));
}


    return 0;
}