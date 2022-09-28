#include <stdio.h> //these is standard system directory
#include "a9.c"    //these is current directory
#define square(ra) ra *ra
#define pi 3.142
int main()
{
    float ra;
    int var = 4;
    printf("This is me %d\n", var);
    printf("This is me %d\n", suma);
    scanf("%f%f%f", &p, &r, &t);
    printf("The simple interest is : %f \n", ((p * r * t) / 100));
    printf("Compound interest is :%0.9f\n", p * (pow(1 + (r / 100), t)));
    printf("The area of circle is \n");
    scanf("%f", &ra);

    float kaka = pi * square(ra);
    printf("The area of circle is %f\n", kaka);
    return 0;
}