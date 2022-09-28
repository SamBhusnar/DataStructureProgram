#include <stdio.h>
int main()
{
    printf("Enter any charactor :");
    char x;

    scanf("%c", &x);
    if (x >= 'a' && x <= 'z' || x >= 'A' && x <= 'Z')
    {
        printf(" %c This is alphabet \n", x);
    }
    else
    {
        printf("%c This is not alphabet \n", x);
    }

    printf("\n");
    return 0;
}