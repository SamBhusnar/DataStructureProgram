#include <stdio.h>
int main()
{
    printf("Enter any character\n");
    char ch;
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z')
    {
        printf("Entered character is lovercase i.e :%c",ch);
    }else if(  ch>='A'&&ch<='Z')
    {
        printf("Entered character is uppercase i.e :%c",ch);

    }else{
        printf("What stuff you've enter %c",ch );
    }
    return 0;
}