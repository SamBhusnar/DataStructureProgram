// ALL rights reserved by samadhan bhusnar as well as copyright
// author: samadhan ramchandra bhusnar
//  date: 21:09:2022
// time : 18:17:00
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
        system("cls"); // to clear previous screen
        printf("%02d:%02d:%02d", h, m, s);
        Sleep(1000); // sleep funtion for windows s capital time in milisecond
    }

    return 0;
}