#include <stdio.h>
void printArray2(int *ptr, int size);
void printArray1(int *ptr, int size);
int main()
{
    printf("Array using pointer and some so called function\n");
    int arr[] = {1, 2, 3, 4};
    // printf("Array first element address : %d\n",arr);
    // printf("Array last element address : %d\n",arr[3]);
    // printf("Array last element address : %d\n",arr[4]);
    // printf("Array last element address : %d\n",&arr[3]);
    printf("Before calling function : %d\n", arr[0]);
    printf("%d\n", arr[3]);
    printf("Done\n");
    printArray1(arr, 4);
    printf("After calling function : %d\n", arr[0]);
    // for (int i = 0; i < 4; i++)
    // {
    //     // printf("%d\n",*arr); it's right
    //     // printf("%d\n", *arr+i); it is right
    //     // printf("%d\n",*(arr+i)); it is right
    //     // arr++;  it causing for error's
    //     // arr=arr+i its also giva an so called error;
    //     // arr+=1;it's also causign for error
    //     // arr=1; it's also causing error
    // }
    // return 'd';// he return ascii value of d he can returen any number from using return keyword and without return also program able to run remember this things
}
void printArray1(int ptr[], int size)
{
    printf("ptr value  is before for loop  : %d\n", ptr);
    for (int i = 0; i < size; i++)
    {
        // printf("%d\n", *ptr);
        // printf("%d\n", *(ptr+i)); ptr value not change
        // ((ptr[i])) this stuff is equal to the ((ptr+i)) stuff
        // printf("%d\n", ptr[i]);// ptr value not change
        // printf("%d\n", *(ptr++)); // this stuff print first of all value and then add 1 in  current value
        // ptr++; ptr value change
        // printf("%d\n",ptr[i]); // real ptr value is not change it's work like ptr+i when ptr is pointer or ptr[]
        // printf("%d\n", *ptr);
        // ptr++; // this type of stuff not allowed in main function but allowed in other function that get array as inpute via pointer or orray itself of understood!
        // printf("%d\n", ptr + i); it's work like ptr[i]
        // printf("%d\n", *(ptr + i));// real value is not change there
        // printf("%d\n",**(&ptr));
        // ptr++;
    }
    printf("ptr value  is after for loop : %d\n", ptr);
    // ptr--;
    // printf("array last element value : %d\n",*(ptr=ptr-1)); // ----> we asign that value to so called ptr
    // printf("array last element value : %d\n",*(ptr-1));  //----> we not asign that value to so called ptr
    // printf("Value of ptr is : %d\n",ptr--);// this stuff i mean ptr-- is not give immedetally ptr-- first of all he  give ptr as it is and after that minus from them that we give for minus
    // printf("Value of ptr is : %d\n",ptr);
    // printf("Value at value of ptr : %d\n",*ptr);
}
void printArray2(int *ptr, int size)
{
    for (int i = 0; i < size; i++)
    {
        printf("%d\n", *ptr);
        ptr++;
    }
    ptr -= 4;
    printf("%d\n", ptr);
    *ptr = 444444;
    printf("%d\n", *ptr);
}
