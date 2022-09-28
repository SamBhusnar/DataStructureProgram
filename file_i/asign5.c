#include<stdio.h>
#define tpi (2*(3.14))
int main(){
    float radius;
    printf("Enter radius of circle\n");
    scanf("%f",&radius);
    printf("Circumference of circle is :%0.2f",(tpi*radius));
    return 0;
}