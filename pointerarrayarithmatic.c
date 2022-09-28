#include <stdio.h>
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};

    int *ptr = arr;
    printf("The addres of array first element is %d\n", &arr);
    printf("The addres of array first element is %d\n", arr);
    printf("The addres of array first element is %d\n", arr + 0);
    printf("The addres of array first element is %d\n", ptr);
    printf("The addres of array first element is %d\n", ptr + 0);
    printf("The addres of array first element is %d\n", (&arr[0]));
    // ---------------------------------------------------------------------------------------------------
    printf("The value  addres of array first element is %d\n", *(arr));
    printf("The value  addres of array first element is %d\n", *(arr + 0));
    printf("The value  addres of array first element is %d\n", *(ptr));
    printf("The value  addres of array first element is %d\n", *((&arr[0])));
    printf("The value  addres of array first element is %d\n", arr[0]);
    printf("The value  addres of array first element is %d\n", *(ptr + 0));
    // ------------------------------------------------------------------------------------------second-----
   ptr++;

    // ----------------------------------------------------------------------------------------------------
    printf("The addres of array second element is %d\n", (arr+1));
    printf("The addres of array second element is %d\n", arr+1);
    printf("The addres of array second element is %d\n", arr + 1);
    printf("The addres of array second elementsam is %d\n", ptr+1);
    printf("The addres of array second elementsam is %d\n", ptr + 1);
    printf("The addres of array second element is %d\n", (&arr[1]));

    // ---------------------------------------------------------------------------------------------------
    printf("The value  addres of array second element is %d\n", *(arr+1));
    printf("The value  addres of array second element is %d\n", *(arr + 1));
    printf("The value  addres of array second element is %d\n", *(ptr+1));
    printf("The value  addres of array second element is %d\n", *((&arr[1])));
    printf("The value  addres of array second element is %d\n", arr[1]);
    printf("The value  addres of array first element is %d\n", *(ptr + 1));
    return 0;
}