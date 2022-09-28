#include <stdio.h>
int main()
{
    // Write a programto calculate simple interest.
    float p, t, r;
    printf("Enter principle:");
    scanf("%f", &p);
    printf("Enter time:");
    scanf("%f", &t);
    printf("Enter rate:");
    scanf("%f", &r);
    float x;
    x = ((p * t * r) / 100);
    printf("The simple interest is %f\n", x);

    return 0;
}