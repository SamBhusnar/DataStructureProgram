#include <stdio.h>
int main()
{
    char c;
    printf("Enter any character \n");
    scanf("%c", &c);
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
    {
        printf("Entered %c character is alphabet \n", c);
    }
    else
    {
        printf("Entered %c characteris not alphabet\n", c);
    }
    return 0;
}