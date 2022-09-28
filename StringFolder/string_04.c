#include <stdio.h>
int main()
{
    char store[200];
    // gets(store);

    // puts(store);
    printf("See movies\n");
    char sam[] = "samadhan ramchandra bhusnar ";
    // sam[]="Sangola college sangola";// this type of stuff is not allowed in using array
    //  but above stuff allowed in following coding stuff
    char *sam2 = "samdhan";
    sam2 = "samadhan ramchandra bhusnar "; // this stuff allowed here
    printf("%s", sam2);
    printf("\nEnter your full name : ");
    // scanf("%s", store);// using scanf we able to get single word as inpute inorder to get multiple word as input use following syntax

    // printf("%s",store);
    // gets(store); // inorder to get inpute from the user and that inpute may or may not be single word
    // puts(store); // in order to print output // this stuff used to when we dealing with string
    return 0;
}