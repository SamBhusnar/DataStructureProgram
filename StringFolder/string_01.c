#include <stdio.h>
#include <string.h>
int main()
{
    // printf("I samadhan ramchandra bhusnar : \n");
    // char arr[] = {'s', 'a', 'm', 'a', 'd', 'h', 'a', 'n', '\0'};
    // char arr[]="samadhan ramchandra bhusnar";
    char *arr="samadhan ramchandra bhusnar";
    printf("Before the loop\n");
    printf("%d\n",arr);
    printf("Ascii value is : %d\n",*arr);
    printf("character is : %c\n",*arr);
    printf(" Length of array is : %d\n",strlen(arr));
    for (int i = 0; i <26+1; i++)
    {
        printf("%c", *(arr++));
    }
printf("\nAfter the loop\n");
    printf("%d\n",arr);
    printf("Ascii value is : %d\n",*arr);
    printf("character is :%c\n",*arr);
// printf("\ni am samadhan ramchandra bhusnar and this is symbol ok \\0");
    return 0;
}
