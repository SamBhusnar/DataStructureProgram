#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, no_of_gueses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    // printf("Number is %d\n ", number);
    do
    {

        printf("Enter  any number between 1 to 100  to play guess number game\n");
        scanf("%d", &guess);

        if (guess < number)
        {
            printf("Please enter higher number\n");
        }
        else if (guess > number)
        {
            printf("Please enter lower number\n ");
        }
        else
        {
            printf("You've guess correct number in %d attempts , And that number is %d\n", no_of_gueses, number);
            printf("You've wannna close this game so please press any any on keyboard\n");
            int key;
            scanf("%d",&key);

        }
        no_of_gueses++;

    } while (guess != number);

    return 0;
}