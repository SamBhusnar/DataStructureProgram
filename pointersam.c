
#include <stdio.h>
int main()
{
    printf("We see here some pointer stuff using array \n");
    int arr[] = {1, 2, 3, 4, 5, 6};
    int value = 0;
    // int *ptr=arr;
    int *ptr = &arr[0];
    for (int i = 0; i < 6; i++)
    {
        // printf("%d\n",arr[i]);
        // printf("%d\n",*arr+i);
        //         printf("%d\n",*(arr+value));
        // value++;
        // printf("%d\n",*arr);// all one
        // access array using pointer  from following lines
        printf("%d\n", *ptr);
        ptr++;
    }

    printf("It's give an garbage value : %d\n", *ptr);
    printf("address of that place which pointer points : %d\n", ptr);
    printf("Array of address is arr[5]: %d\n", &arr[5]);
    // we initialize pointer value here
    // ptr = (arr + 5);
    // ptr--;
    // ptr-=1;
    // ptr=ptr-1;
    // ptr=arr+5;
    // ptr=4; it causing for error our program directally terminate (crash) after doing this type of work or 
    // our program tries to access illigal memory  address by os terminate our program immedetally 
    printf(" Pointer reinitialize value is : %d\n", ptr);
    printf("ptr dereferencing value after initializing is %d\n", *ptr);

    printf("address of that place which pointer points : %d\n", ptr);
    printf("Array of address is arr[5]: %d\n", &arr[5]);

    return 0;
}
