#include <stdio.h>
int main()
{
    int marks[4];
    int *ptr = marks;
    // int *ptr=&marks[0];
    for (int i = 0; i < 4; i++)
    {
        printf("Enter %d student marks out of 100\n", i + 1);
        scanf("%d", ptr);
        ptr++;
    }
    ptr = marks;
    for (int i = 0; i < 4; i++)
    {
        // printf("The marks of  %d student is %d\n",( i + 1),marks[i]);
        // printf("The marks of  %d student is %d\n", (i + 1), *ptr);
        // ptr++;
        // printf("The marks  of  %d student is %d\n", (i + 1), *(ptr+i));
        printf("The marks  of  %d student is %d\n", (i + 1), ptr[i]);

    }

    return 0;
}