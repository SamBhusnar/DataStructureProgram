#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int number, guess, no_of_gueses = 1;
    srand(time(0));
    number = rand() % 100 + 1;
    printf("Number is %d\n ", number);
    return 0;
}