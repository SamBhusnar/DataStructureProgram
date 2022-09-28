#include <stdio.h>
int main()
{
    FILE *ptr;
    int num;
    ptr = fopen("samadhan.txt", "r");
    char c=fgetc(ptr);
    while (c!=EOF)
    {
        fclose(ptr);
    printf("%c",c);

    }
    
   
    return 0;
}