#include <stdio.h>
int main()
{ // Write a program to values of temperature from Celsiusto Fahrenheit
    printf("The temperature in celsius \n");
    float x;
    scanf("%f", &x);
    printf("The temperature in celsius is  %f and fahrenheit is %f", x, ((x * 9 / 5) + 32));

    return 0;
}