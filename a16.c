#include <stdio.h>
#include <math.h>
int main()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coiffician of a b c \n");
    scanf("%lf%lf%lf", &a, &b, &c);
    discriminant = (b * b) - (4 * a * c);
    if (discriminant > 0)
    {
        root1 = ((-b + sqrt(discriminant)) / (2 * a));
        root2 = ((-b - sqrt(discriminant)) / (2 * a));
        printf("root1 =%0.2lf and root2=%0.2lf", root1, root2);
    }
    else if (discriminant == 0)
    {
      double same = (-b / (2 * a));
        printf("root1 = %0.2f root2=%0.2lf\nboth are same root=%0.2lf\n", same,same, same);
    }
    else
    {
        realPart = (-b / (2 * a));
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("realpart of root is %0.2lf and imagpart of root is %0.2lf\n", realPart, imagPart);
        double h = realPart + imagPart;
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
    return 0;
}
