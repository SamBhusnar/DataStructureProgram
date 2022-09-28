#include<stdio.h>
#define twopi (2*3.142)
int main(){
    float a;
    printf("Enter  radius of circle\n");
    scanf("%f",&a);
    printf("The circumference of circle is %f ",(twopi*a));
    return 0;
}