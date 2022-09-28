#include<string.h>
#include<stdio.h>
int main(){
char sam[30];
char sam2[30];
gets(sam);
gets(sam2);
puts(sam);
puts(sam2);
printf("%d",strcmp(sam,sam2));
return 0;
}