#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int emp_code;
}e;

int main(){
  e meta[10];  
  for (int  i = 0; i < 10; i++)
  {
    printf("Enter  employee no %d code\n",i+1);
    int sam;
scanf("%d",&sam);
    meta[i].emp_code=sam;
  }
  int i=0;
  while (i!=10)
  {
    printf("Employee %d is code is %d\n",i+1,meta[i].emp_code);
 i++;
  }
  
    return 0;
}