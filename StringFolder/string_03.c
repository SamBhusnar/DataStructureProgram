#include<stdio.h>
int main(){
    char name[27];
    printf("Enter your name : ");
// gets(name);
// gets(name);
for (int  i = 0; i < 4; i++)
{
    scanf("%s",name);
}

    // for (int  i = 0; i < 26; i++)
    // {

    //     scanf("%c",&name[i]);
    // }
    //  for (int  i = 0; i < 27; i++)
    // {
    //     printf("%c",name[i]);
    // }
    // printf("%s",name);
    puts(name);
    return 0;
}