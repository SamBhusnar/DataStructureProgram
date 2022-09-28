#include <stdio.h>
int main()
{
    int num;
    int i;
    for (int j = 0; j < 10; j++)
    {

        printf("Enter any integer\n");
        scanf("%d", &num);
        if (num == 0)
        {
            printf("zero multiplication table is ten time zero\n");

            goto end;
        }

        i = num * 2;
        for (; i <= (num * 10); i += num)
        {
            printf("%d\n", i);
        }
    }
end:
    return 0;
}