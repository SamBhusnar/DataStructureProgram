#include<stdio.h>
int main(){
    int dog;
    printf("Enter size of array you want creat\n");
    scanf("%d",&dog);
    int arr[dog];
for (int  i = 0; i < dog; i++)
{
    printf(" Enter the %d array element \n",i);
    scanf("%d",&arr[i]);
}
for (int  i = 0; i < dog; i++)
{
    printf(" The array  %d  number is %d\n",i,arr[i]);
}
    return 0;
}