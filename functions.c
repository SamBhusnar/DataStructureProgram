#include <stdio.h>
int sam(int x, int y)
{

    return x * y;
}
int sun(int x, int y)
{

    return x - y;
}
int moon(int x, int y)
{

    return x + y;
}
int star(int x, int y)
{

    return x / y;
}

int persent(int x, int y)
{

    return x % y;
}
int main()
{
    int a, b;
    int r;
    printf("Enter any two integer\n");
    scanf("%d%d", &a, &b);
    int x, y, z, m;
    x = sam(a, b);
    y = sun(a, b);
    z = star(a, b);
    m = moon(a, b);
    r = persent(a, b);
    printf(" multiplication %d\nsubtraction %d\naddition %d\ndivision %d\nremeder %d",x,y,m,z,r);

    return 0;
}