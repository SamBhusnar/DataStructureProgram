#include<stdio.h>
#include<string.h>
int main(){
    printf("We are going to see some string method that is in build\n");
    char ptr1[]="SangolaCollegSangola";
    char ptr2[]="Samadhan";
    // printf("Lenght of string is : ptr1 %d and ptr2 is %d ",strlen(ptr1),strlen(ptr2));
    printf("Concatinate two string : %s\n",strcat(ptr1,ptr2));
    printf("%s",ptr1);
    return 0;
}