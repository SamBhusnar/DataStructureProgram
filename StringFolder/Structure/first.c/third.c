#include <stdio.h>
#include <string.h>
typedef struct College
{
    char clg[100];
    char dp[40];
    int Roll;
    char div;
    char name[100];
} e;
void show(e /*student[]*/ /*student*/ student)
{
    printf("College name : %s \n", student.clg);
    printf("Department  : %s \n", student.dp);
    printf("Name of student : %s \n", student.name);
    printf("Division of student : %c \n", student.div);
    printf("Roll number of student : %d \n", student.Roll);
   student.Roll = 2108;
}
int main()
{
// clrscr();
    printf("We are going to see some structure stuff here\n");
    e student, *ptr;
    ptr = &student;
    strcpy(ptr->dp, "Department of computer science");
    strcpy(ptr->clg, "sangola college,sangola");
    // student.clg = 'd';
    // ptr->clg = 'd';
    // (*ptr).clg = 'd';
    // ptr->div = 'a';
    student.div = 'A';
    ptr->Roll = 3108;
    strcpy(ptr->name, "samadhan ramchandra bhusnar");
    show(student); // we pass here just variable not that variable address or so called reference
    // show(&student);
    // printf("Roll number of student is %d \n", student.Roll);
    // int arr[40];
    // char arr[40] = "SangolaCollegeSangola\n";
    // char *ptr = arr;
    // arr[0]='d';
    // *ptr=4;
    // printf("Array first element before insert a string into array  is : %c\n", arr[0]);
    // // strcpy(arr,"samadhan ramchandra bhusnar\n");
    // printf("Array first element after  inserting  a string into array  is : %c\n", arr[0]);
    // puts(arr);
    // printf("%s", arr);
    getchar();
 
    // getch();
    return 0;
}