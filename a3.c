#include<stdio.h>
int main(){
// write a programe to calculating the area of circle
    float r;
    printf("Enter radius of circle \n");
    scanf("%f",&r);
    const float pi=3.142;
    printf("The area of circle is %f\n",(pi*r*r));
    return 0;
}