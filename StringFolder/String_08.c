#include<stdio.h>
int main(){
    printf("Enter your name : ");
    char name[30];
    // scanf("%s",name);
// char *name;
    gets(name);
    printf("%s\n",name);
    puts(name);

    return 0;
}