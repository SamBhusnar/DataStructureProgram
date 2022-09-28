#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int SnakeWaterGame(char you, char computer)
{
    if (you == computer)
    {
        return 0; // you've loose the game , because you've and computer choose same choise
    }
    else if (you == 's' && computer == 'w')
    {
        return 1; // you've win because snake drink wholw water
    }
    else if (you == 's' && computer == 'g')
    {
        return -1; // you've loose game ,becuase gun kill snake
    }
    else if (you == 'w' && computer == 's')
    {
        return -1; // you've loose the game  becuase snake drink whole water
    }
    else if (you == 'w' && computer == 'g')
    {
        return 1; // you've win the game  ,because water damege gun
    }
    else if (you == 'g' && computer == 's')
    {
        return 1; // you've win becaluse gun kill snake
    }
    else if (you == 'g' && computer == 'w')
    {
        return -1; // you've loose game ,because water damege the gun
    }
}
int main()
{
    srand(time(NULL));
    int randomNum = rand() % 100 + 1;
    char you, computer; // two variable declaired
    if (randomNum <= 33)
    {
        computer = 's'; // if value is less than 33 then computet choise is snake 's'
    }
    else if (randomNum >= 34 && randomNum <= 66)
    {
        computer = 'w'; // if value is greter than equal 34 and less than equal 66 then computer choise is water 'w'
    }
    else
    {
        computer = 'g'; // if value is greter than equall 67 then computer choise is gun for 'g'
    }
    you = 'a';// set default value as because i want to make sure i obtain entry inside the loop that's why.
    while (you != 's' && you != 'g' && you != 'w')
    {
        printf("Enter your choise 's' for snake 'w' water 'g' gun for exit press e \n");
        scanf("%c", &you);
        if (you == 'e')
        {
            break;
        }
    }
    if (you == 'e')
    {
        goto end;
    }

    int result = SnakeWaterGame(you, computer);
    printf("You've choose '%c' and computer choose '%c'\n", you, computer);
    if (result == 0)
    {
        printf("Game draw!\n");
    }
    else if (result == 1)
    {
        printf("You've win!\n");
    }
    else
    {
        printf("You've loose the game!\n");
    }
end:
    return 0;
}