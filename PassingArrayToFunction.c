#include <stdio.h>
void printArray(int ptr[], int n)
{
    printf("array 0 address from pointer :%d\n", ptr);
    for (int i = 0; i < n; i++)
    {
        printf("The marks of student %d is : %d\n", (i + 1), *ptr);
        ptr++;
    }
    ptr -= 5;
    for (int i = 0; i < n; i++)
    {
        printf("Enter numbers to reinitialize existing array \n");
        scanf("%d", ptr);
        ptr++;
    }
    ptr -= 5;
    for (int i = 0; i < n; i++)
    {
        printf("The marks of student %d is : %d\n", (i + 1), *ptr);
        ptr++;
    }
    ptr -= 1;

    printf("array 4: %d\n", ptr);
}
int main()
{

    int array[] = {1, 2, 3, 4, 5};
    int *ptr = array;

    for (int i = 0; i < 5; i++)

    {
        // printf("%d\n", *array);
        // array++; // this type of stuff not allowed in main function ok understood! ,
        // allowed in other function

        // that defined in outside of main function
        printf("%d\n", *ptr);
        ptr++;
    }
    printf("Garbage value : %d\n",*ptr);
    printf(" address of array last element : %d\n",&
    
    array[4]);
    printf("pointer address of after performing operation : %d\n",ptr);
    // printf("Array zero value is : %d\nFrom start now \n",array[0]);
    // for (int  i = 0; i < 5; i++)
    // {
    //     printf("Real array value is : %d\n",array[i]);
    // }
    // printf("array 0 value  before call is : %d\n", array[0]);
    // printf("array 0  address :: %d\n", &array[0]);
    // printf("array 4  address :: %d\n", &array[4]);
    // printArray(array, 5);
    // printf("array 0 is : %d\n", array[0]);
    // printf("array 1 is : %d\n", array[1]);
    // printf("array 2 is : %d\n", array[2]);
    // printf("array 3 is : %d\n", array[3]);
    // printf("array 4 is : %d\n", array[4]);
    return 0;
}