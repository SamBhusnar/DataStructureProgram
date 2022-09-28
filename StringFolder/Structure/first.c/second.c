#include <stdio.h>
#include <string.h>
typedef struct SangolaCollegeSangol
{
    int roll;
    char div;
    char name[20];

    // printf("We are in structure\n");// he give an error for us , we cannot print like this it causing error
} e;
void show(e then){
printf("roll number : %d\n",then.roll);
printf("Division : %c\n",then.div);
printf("Name of student :  %s\n",then.name);
}
int main()
{
    printf("We are playing with char array in structure \n");
    // e sam;
    // printf("%s",sam);
    // puts("samadhan"); it work well as desired ok!
    e sam;
    sam.div = 'a';
    sam.roll = 3108;
    strcpy(sam.name, "samadhan");
    show(sam);
    return 0;
}