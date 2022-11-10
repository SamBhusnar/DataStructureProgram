#include <stdio.h>
int main()
{
    char ch;
    printf("Enter  any character\n");
    scanf("%c", &ch);
    if (ch >= 48 && ch <= 57)
    {
        printf("Entered character is digit\n");
    }
    else if (ch >= 65 && ch <= 90)
    {
        printf("Entered character is capital letter\n");
    }
    else if (ch >= 97 && ch <= 122)
    {
        printf("Enterd character is small letters \n ");
    }
    else
    {
        printf("character is special symblol\n");
    }

    return 0;
}