#include<stdio.h>
// #undef undefines a macro
// #ifdef it is condition if condition is true then give acess
// #ifndef if condition is not true 
// #if it is work like if  statement in main function
// #else  it is work like else statement in main function
// #elif  it is work like if else  statement in main function
// #pragma  to issue some special commands to the compiler 
int main(){
    // some predifine macro & description
// 1  __DATE__ The current date as character literal in "MMM DD YYYY" format.
// 2 __TIME__ this contains the curent time  as character literal in "HH:MM:SS" format. 
// 3 __FILE__ the current filename as a string literal.
// 4 __LINE__ The current line number as a decimal constant
// 5 __STDC__ defined as l(one) when the compiler complies with the ANSI standard.
printf("file name is %s]n",__FILE__);

    return 0;
}