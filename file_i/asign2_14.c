#include<stdio.h>
int main(){
    int num;
    int a,r;
    printf("Enter any number \n");
    scanf("%d",num);
    while (num>0)
    {
        num=num%10;
    }
    

    return 0;
}