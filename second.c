#include <stdio.h>
int main()
{
    FILE *ptr;
    ptr = fopen("samadhan.txt", "r");
    int num;
    fscanf(ptr, "%d", &num);
    printf("Befor :: The number is garbage value  %d\n", num);

    fscanf(ptr, "%d", &num);
    printf("After :: The number is  definate value %d\n", num);
    fclose(ptr);
    return 0;
}