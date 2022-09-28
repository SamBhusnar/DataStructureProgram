#include <stdio.h>
int main()
{
    float marks;
    marks = 565;
    int age;
    printf("Enter your age\n");
    scanf("%d", &age);

    if (age >= 18)
    {
        float w;
        printf("Enter your weight in kg\n");

        scanf("%f", &w);
        if (w >= 50)
        {
            float n;
            printf("You are healty probalily\n");
            printf("Eneter your marks\n");
            scanf("%f", &n);

            if (n >= marks)
            {
                printf("Your marks is good well done\n");
            }
            else
            {
                printf("You got good marks as well but know need some more practics\n");
                printf("Hey man don't sad get challenge commplete these automatic your marks are automatic improve\n");
            }
        }
        else
        {
            printf("You take advise from doctor or physitian\n");
        }
    }
    else
    {
        printf("You are childeren\n");
    }

    return 0;
}