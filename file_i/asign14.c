        //14.  Write a program to check the given number is odd or even.
#include<stdio.h>
int main(){
    int inta;
    printf("Enter any number\n");
    scanf("%d",&inta);
   if (inta%2==0)
   {
      printf("%d number is even\n",inta);
   }
   
   else{
     printf("%d number is odd\n",inta);
   }
    return 0;
}