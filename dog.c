#include<stdio.h>
int main(){
    int i,num;

printf("Enter any number\n");
scanf("%d",&num);
i=num;

while (i>=(num*10))
{
    printf("%d\n",i);
    i+=num;
}

    return 0;
}