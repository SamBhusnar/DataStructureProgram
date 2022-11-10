#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, d, result;
    printf("Enter first two point : ");
    scanf("%lf%lf", &a, &b);
    printf("Enter second two point : ");
    scanf("%lf%lf", &c, &d);
    result = sqrt(pow((b- a) ,2) + pow((d - c) ,2));
    printf("Distance between two point is : %.15lf", result);
    return 0;
}