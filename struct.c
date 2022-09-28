#include <stdio.h>
#include <string.h>
typedef union cat
{
    int id;
    float marks;
    char name[100];
    char fav_char;
} chalu;
chalu ram, sam, kishan;
int main()
{
    typedef int s;
    sam.fav_char = 's';
    ram.fav_char = 'f';
    kishan.fav_char = 'k';
    kishan.id = 12;
    kishan.marks = 95.99;
    strcpy(ram.name, "ravindar kailash beldar");
    strcpy(kishan.name, "tanaji vittal londe");
    sam.id = 44;
    sam.marks = 1.45;
    ram.marks = 111.1;
    ram.id = 99;
    strcpy(sam.name, "samadhan racmchandra bhusnar");
    printf("The name of employee is:%s fav_char is %c and marks %f & id is %d\n", sam.name, sam.fav_char, sam.marks, sam.id);
    printf("The name of employee is:%s fav_char is %c and marks %f & id is %d\n", ram.name, ram.fav_char, ram.marks, ram.id);
    printf("The name of employee is:%s fav_char is %c and marks %f & id is %d\n", kishan.name, kishan.fav_char, kishan.marks, kishan.id);
    return 0;
}
