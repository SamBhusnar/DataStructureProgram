#include<stdio.h>
int main(){
    FILE *ptr;
    int num;
    ptr=fopen("samadhan.txt","w");
    fscanf(ptr,"%d",&num);
    printf("Read from the file : %d",num);
    fprintf(ptr,"hello i am samadhan bhusnar from pandharpur\n");
    return 0;
}