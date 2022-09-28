#include<stdio.h>
int main(){
    int a;
    int remainder,reverse=0;
    printf("Enter any number to check number is Palindrome or not : ");
    scanf("%d",&a);
    int b=a;
    while (a!=0)
    {
        remainder=a%10;
        reverse=reverse*10+remainder;
        a/=10;
    }
    printf("Reversed number is :%d\n",reverse);
    if (b==reverse)
    {
        printf("Given number is Palindromic : %d\n",b);
    }
    else{
        printf("given number is not Palindromic :%d\n",b);
    }
    return 0;
}