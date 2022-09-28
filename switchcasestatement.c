#include <stdio.h>
int main()
{
    int x;
    int w;
    printf("Enter you age\n");
    scanf("%d", &x);
    switch (x)
    {
    case 10:
        
        printf("Enter your weight \n");
         scanf("%d", &w);
         printf("Your weight is %d\n", w);
        printf("Your age is 10\n");
    
        break;
    case 11:
        printf("Your age is 11\n");
        printf("Enter your weight \n");
        scanf("%d", &w);
        printf("Your weight is %d", w);

        break;
    case 12:
        printf("Your age is 12\n");
        printf("Enter your weight \n");
        scanf("%d", &w);
        printf("Your weight is %d", w);
        break;

    default:
        printf("Your age is not 10 11 or 12\nas wel as your weight is unkwon\n");
    }
    return 0;
}