#include<stdio.h>
#include<math.h>
int main(){
    float p,r,t;
    printf("Enter priciple rate and time ");
    scanf("%f%f%f",&p,&r,&t);
    printf("compound interest is :%f",p*pow((1+r/100),t));
    return 0;
}