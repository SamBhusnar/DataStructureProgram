#include<stdio.h>
int main(){
    // write a programe to calculatiing the area of triangle
    float length ,width;
    printf("Enter lenght and width of trigle\n");
    scanf("%f%f",&length,&width);
    const float half=0.5;
    printf("Area of triangle is %f \n",(half*length*width));

    return 0;
}