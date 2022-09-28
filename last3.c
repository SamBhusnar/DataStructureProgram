#include <stdio.h>
int sum(int a, int b)
{

    return a + b;
}
int main()
{
    printf("The sum of 2+3 = %d\n", sum(2, 3));
    int (*fptr)(int, int);//function pointer point to a such funtion that give's two integer
    fptr = &sum;//pointer point to sum fuction
    int d = (*fptr)(3, 9);  //dereferece function and give that function value that fuction la pointer point karatoy
    printf("The value of d is %d\n", d);//
    return 0;
}