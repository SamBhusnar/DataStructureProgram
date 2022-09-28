#include<stdio.h>
int main(){
    int arr[]={1,2,3,4};
    for (int  i = 0; i < 4; i++)
    {
        printf("%d\n",(arr+i));
    }
    printf("I'm array : %d\n",arr);
    return 0;
}