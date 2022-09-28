#include<stdio.h>
int main(){
int arr[]={1,2,3,4,5,6};
for (int  i = 0; i < 6; i++)
{
    printf("Array %d element  is : %d  \n",i+1,arr[i]);
}
arr++;
printf("%d\n",*arr);
    
    return 0;
}