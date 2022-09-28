#include <stdio.h>
#include <math.h>
int suma=42222;
float p, r, t;
    float x;
int main2()
{
    

    // Write a programto calculate compoundinterest.
    printf("Enter principle rate and time respectively\n");
    
    scanf("%f%f%f", &p, &r, &t);
    printf("The simple interest is : %f \n", ((p * r * t) / 100));
    printf("Compound interest is :%0.9f",p*(pow(1+(r/100), t)));
    
    return 0;
}