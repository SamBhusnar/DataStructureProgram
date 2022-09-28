#include <stdio.h>
int main()
{
    FILE *ptr = NULL;
    ptr = fopen("mh.txt", "a+");
    char str[100];
  
 fgets(str,28, ptr);
    printf("The character is: %s\n",str);


    return 0;
}