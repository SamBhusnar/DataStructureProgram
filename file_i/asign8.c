                //8.   Write a programto calculate simple interest.#include<stdio.h>
#include<stdio.h>
int main(){
    float p,r,t;
    printf("Enter priciple time and rate\n");
    scanf("%f%f%f",&p,&r,&t);
    printf("Simple interest is : %f",((p*r*t)/100));
    return 0;
}