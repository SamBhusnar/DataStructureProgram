#include <stdio.h>
#include <string.h>
typedef struct College
{
    int Roll;
    char div;
    char Firstname[20];
} st;
void show(st variable)
{
    printf("Name of student : %s\n", variable.Firstname);
    printf("Div of student  : %c\n", variable.div);
    printf("Roll no of student  : %d\n", variable.Roll);
    puts(variable.Firstname);
}
int main()
{
    // struct College student;
    st student;
    student.Roll = 3108;
    student.div = 'A';
    // strcpy(student.Firstname, "samadhanRamchandraBhusnar"); // run this line using pointer remove some character of this array ok!
    strcpy(student.Firstname, "samadhan");
    printf("We are going to see structure in c language\n");
    st *ptr;
    ptr = &student;
    ptr->div = 'a';
    printf("Length of string is Befor initialize string : %d\n", strlen(student.Firstname));

    strcpy(ptr->Firstname, "sam");
    printf("Length of string is after initialize string : %d\n", strlen(student.Firstname));

    ptr->Roll = 99898;
    show(student);

    return 0;
}