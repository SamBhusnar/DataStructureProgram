#include<stdio.h>
int main(){
    // int aL=4;
    int a=4;
    int *ptr=NULL;//it is wild pointer
    // ptr=&aL;//it is no longer wild pointer
    printf("The value of ptr is %d \n",ptr);
    printf("The value of ptr is %d \n",*ptr);
    ptr=&a;
    printf("The value of ptr is %d\n",ptr);
    printf("The value of ptr is %d\n",*ptr);
    return 0;
}
// it is recomemded to don't use wild pointer because wild pointer 
// because 