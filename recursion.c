#include <stdio.h>
int sam(int a)
{
    if (a == 0 || a == 1)
    {
        return 1;
    }
    else
    {
        return (a * sam(a - 1));
    }
}
int main()
{
    for (int  i = 0; i < 10; i++)
    {
        
        
    
    
    int num;
    printf("Enter any number to find factorial\n");
    scanf("%d", &num);
    int x;
    x = sam(num);
    printf("factorial of %d number is %d\n", num, x);
    }
    return 0;
}