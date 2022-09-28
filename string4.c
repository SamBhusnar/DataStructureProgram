#include<stdio.h>
#include<string.h>

int main(){
char *ptr="samadhan ramchandra bhusnar ";
printf("starting ptr\n ");

puts(ptr);
printf("\n Length of string  is : %d\n ", strlen(ptr));   
printf("\n Ending ptr");
printf("\n start for loop \n ");
int count = strlen(ptr);
printf("The size of ptr string is : %d\n ", count );
    // for (int  i = 0; i < (strlen(ptr)) ;i++)
    // {
    //     printf("%c",*ptr);
    //     ptr++;
    // }
    printf("%s", ptr);
 printf("\n Ending for loop \n ");
    return 0;
}