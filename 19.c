#include <stdio.h>
int main()
{
    int kbyts, byte;
    printf("Enter any nubers in bytes : ");
    scanf("%d", &byte);
    kbyts = byte / 1024;
    printf(" %d byte = %d killobyte", byte, kbyts);

    return 0;
}