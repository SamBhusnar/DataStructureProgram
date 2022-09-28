#include <stdio.h>
int main()
{

    // char *ptr="Sangola";
    // char *ptr="Sangola";
    char store[40];
    printf("Enter any string \n");
    scanf("%c", store);// what if we give here &store
    printf("ascii value is : %d \n", *&store[0]);
    char *ptr = store;
    // printf("%d",*ptr);// it give ascii value of entered character
    printf("%d", ptr); // it give ascii value of entered character

    // while(*ptr!='\0'){
    //     printf("%c",*ptr);
    //     ptr++;
    // }

    return 0;
}