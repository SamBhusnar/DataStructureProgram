#include <math.h>
#include <stdio.h>
int main()
{

    float a, b, c, discriminant, root, root1, root2;
    printf("Enter coefficients a,b and c: ");
    scanf("%f%f%f", &a, &b, &c);
    discriminant = b * b - 4 * a * c;
    root = (-b / (2 * a));
    root1 = (-b + (sqrt(discriminant))) / (2 * a);
    root2 = (-b - (sqrt(discriminant))) / (2 * a);
    if (discriminant > 0 && a != 0)
    {
        printf("root1 = %0.2f and  ", root1);
        printf("root2 = %0.2f \n", root2);
    }
    else if (discriminant == 0 && a != 0)
    {
        printf("x1 =   %0.2f   and  ", root);
        printf("x2 =   %0.2f   \n", root);
    }
    else if (discriminant < 0 && a != 0)
    {
        printf("root1 = %0.2f+%0.2fi and  ", root, (sqrt(-discriminant)) / (2 * a));
        printf("root2 = %0.2f-%0.2fi\n", root, (sqrt(-discriminant)) / (2 * a));
        // we give minus here because square discrminant of is already minus
        // that is resion control come here
    }
    else
    {
        printf("May be you  something wrong entered \n");
    }
    return 0;
}
