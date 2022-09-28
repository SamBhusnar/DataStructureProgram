        //11.  Write a program to values of temperature from Celsiusto Fahrenheit.
#include<stdio.h>
int main(){
    float temp;
    printf("Enter tempretur in celsius\n");
    scanf("%f",&temp);
    float s=(((temp*9)/5) + 32);
    printf("fahrenheit: %0.1f",s);
    return 0;
}