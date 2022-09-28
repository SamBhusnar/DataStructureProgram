#include<stdio.h>
int sam(int a){
    return 444;
}
int main(){
  int saveValue= sam(4);
  printf("save value is %d \n",saveValue);
    printf("Before execution of black\n");
    {
        printf("i am printf function \n");
    }
    printf("Before execution of black\n");
    
    return 0;
}