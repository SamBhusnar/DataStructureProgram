#include<string.h>
#include<stdio.h>
int main(){
printf("We give array as argument\n");
char arr[99];
gets(arr);
puts(arr);
int s;
char p;
strcpy( p,arr);
printf("The length of string %d ",strlen(p));
return 0;
}