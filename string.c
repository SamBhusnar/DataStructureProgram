#include<stdio.h>
int main(){
printf("Enter your name\n");
char arr[27];
for (int  i = 0; i < 27; i++)
{
    scanf("%c",&arr[i]);

}
for (int  i = 0; i < 27; i++)
{
    printf("%c",arr[i]);

}

return 0;
}