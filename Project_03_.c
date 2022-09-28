#include <stdio.h>
#include <windows.h>

int main()
{
    int h, m, s;
    printf("Set time:\n");
    scanf("%d%d%d", &h, &m, &s);
    if (h > 12 || m > 60 || s > 60)
    {
        printf("ERROR !");
        exit(1);
    }
    while (1)
    {
        s++;
        if (s > 59)
        {
            m++;
            s = 0;
        }
        if (m > 59)
        {
            h++;
            m = 0;
        }
        if (h > 12)
        {
            h = 1;
        }
        system("cls");// this line will clear previous output
        printf("%02d:%02d:%02d", h, m, s);// to show time
        Sleep(1000);// this line will slow down while loop
    }

    return 0;
}