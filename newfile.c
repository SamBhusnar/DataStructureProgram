#include <stdio.h>
int main()
{

    FILE *ptr = NULL;
    char string[100] = "hello gause i am a soul";
    // ptr=fopen("mh.txt","r");
    // fscanf(ptr,"%s",string);
    // printf("The content of this file has:%s\n",string);
    ptr = fopen("mh.txt", "w");
    fprintf(ptr, "%s", string);
fclose(ptr);
    return 0;
}