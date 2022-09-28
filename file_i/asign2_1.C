#include <iostream>
using namespace std;
int main()
{
    printf("Enter any three number \n");
    float x, y, z;
    scanf("%f%f%f", &x, &y, &z);
    if (x > y && x > z)
    {
        printf("%0.2f is greter than this %0.2f and this %0.2f \n", x, y, z);
    }
    else if (y > x && y > z)
    {
        printf("%0.2f is greter than this %0.2f and this %0.2f ", y, x, z);
    }
    else if (z > y && z > x)
    {
        printf("Now %0.2f is greter than this %0.2f and this  %0.2f \n", z, y, x);
    }
    else if (x == y && x == z)
    {
        printf("%0.2f and %0.2f and %0.2f three are equal largest number\n", x, y, z);
    }
    else if (y == z && y > x)
    {
        printf("this %0.2f and this %0.2f  are same and greter than this %0.2f", y, z, x);
    }
    else if (x == z && x > y)
    {
        printf("this %0.2f and this %0.2f  are same and greter than this %0.2f", x, z, y);
    }
    else if (x == y && x > z)
    {
        printf("this %0.2f and this %0.2f  are same and greter than this %0.2f", y, x, z);
    }

    return 0;
}