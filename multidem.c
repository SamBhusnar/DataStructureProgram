#include <stdio.h>
void fucn(int *ptr, int size, int size2)
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            printf("%d ", *ptr);
            ptr++;
            // printf("%d ",ptr[i][j]);// it give an preety error
        }
        printf("\n");
    }
    *(ptr - 1) = 8;
    printf(" Where exactally pointer that place address : %d\n", ptr);
}
int main()
{
    printf("We are going to show multidimentional array using pointer function and main function\n");
    int arr[][2] = {{1, 2},
                    {3, 4}};
    // it goes well following stuff
    // fucn(&arr[0][0], 2, 2);// it goes in ease manner 
    fucn(arr,2, 2);// it also go in ease manner but give an preety warning  to us 
    printf("array last element address using array  : %d %d \n", &arr[1][1], arr[1][1]);
    // int *ptr =arr;
    // fucn(arr,2,2); it also give an result but with pretty warning ok!
    // int *ptr =&arr[0][0]; its also right
    // for (int i = 0; i < 2; i++)
    // {
    //     for (int j = 0; j < 2; j++)
    //     {
    //         // printf("%d ",  *((*(arr+i))+j));
    //         // (arr+i ---> row )+j ---> coloum
    //         // first of all we got a particular row of array may that 1,2,3,4 and so ... on
    //         // arr+i --------> it is give a particular row if if write arr+1 first row arr+2 second row arr+3 third row arr+4 fourth row after this stuff we add them in j after adding coloum in that row address we got a particular coloum of that array
    //         // using  pointer now
    //         printf("%d ", *ptr);
    //         ptr++;
    //     }
    //     printf("\n");
    // }
    // // printf("%d\n", arr);
    // // printf("%d\n", *arr);
    // // printf("arr[][]\n");
    // // printf("%d\n", &arr[0][0]);
    // // printf("%d\n", &arr[0][1]);
    // // printf("%d\n", &arr[1][0]);
    // // printf("%d\n", &arr[1][1]);
    // // printf("arr+1 :  %d \n ",arr+0); // row first element
    // // printf("arr+2 :  %d \n ",arr+1); // row second element
    // printf("arr+3 :  %d \n ",arr+2); // row third element
    // printf("arr+4 :  %d \n ",arr+3); // row fourth element
    return 0;
}