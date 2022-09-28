#include <stdio.h>
int ano[12];
char name[100];
int age;
char *p;
int grade;
int roll_number;
int main()
{
    printf("Enter your name : \n");
    gets(name);
    printf("Enter your age: ");
    scanf("%d", &age);
    printf("Enter your college name: ");
   scanf("%s",p);
    printf("Enter your grade: ");
    scanf("%d",&grade);

    printf("Enter your roll number: ");
    scanf("%d", &roll_number);
    // this program to store aadhar number of humans that are live in india
    for (int i = 0; i < 12; i++)
    {
        printf("Enter %d digit of your Aadhar card number\n", i + 1);
        scanf("%d", &ano[i]);
    }
    printf("Your name is :\t\t\t");
    puts(name);
    printf("Your age is : %d",age);
    printf("Your college name is : ");
    char value[300];
   p=value;
    printf("Your grade is : %d",grade);
    printf("Your roll number : %d",roll_number);


    
    printf("Your Aadhar number is : \t");

    for (int i = 0; i < 12; i++)
    {
        if (i == 4 || i == 8)
        {
            printf(" ");
        }
        printf("%d", ano[i]);
    }

    return 0;
}