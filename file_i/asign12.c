            //12.  Write a program to compute quotient and remainder
#include<stdio.h>
int main(){
    int divisor,dividend;
    printf("Enter dividend and divisor\n");
    scanf("%d%d",&dividend,&divisor);
    int s=(dividend) % (divisor);
    printf("quotient :%d\n",(dividend/divisor));
    printf("remainder:%d\n",s);
    return 0;
}