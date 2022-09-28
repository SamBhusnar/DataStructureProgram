#include <stdio.h>
int main()
{

    // write a program to check whether a character is vowel or consonat.
    printf("Enter a character \n");
    char x;
    scanf("%c", &x);
    if (x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' || x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U')
    {
        printf("Entered character  %c is vowel \n", x);
    }
    else
    {
        printf("Entered character  %c is consonant\n ", x);
    }

    return 0;
}