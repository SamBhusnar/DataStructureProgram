#include<stdio.h>
int main(){
    int save;
    printf("Prime number program \n");
printf("Enter any number to find entered number is prime or not \n");8
scanf("%d",&save);
for (int  i = save; i>=1; i--)
{
if (save%i!=0)
{
    printf("Entered number is not prime %d",save);
}else if (save==1|| save==i)
{
    printf("Entered number is prime %d",save);
}


}

    return 0;
}