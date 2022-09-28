#include<stdio.h>
int main(){
    FILE *ptr;
    ptr=fopen("samdadhan.txt","r");
    
if (ptr==NULL)
{
    printf("file does not exit\n");
}else{
    printf("file exit\n");
}

    return 0;
}