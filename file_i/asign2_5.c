#include<stdio.h>
int main(){
    printf("Enter nth number for print 1 to nth number\n");
    int x;
    scanf("%d",&x);
    for (int  i = 0; i <=x; i++)
    {
        printf("%d\n",i);
    }
    
    return 0;
}