#include<stdio.h>
int main(){

    int a=49;
int *ptr=&a;
printf("value of ptr is %d \n" ,ptr);
printf("value of ptr is %d \n" ,&a );
printf("value of a is %d \n" ,a );
printf("value of a is %d \n" ,*(ptr) );
printf("value of a is %d \n" ,*(&a) );
return 0;
}