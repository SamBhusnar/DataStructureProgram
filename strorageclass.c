#include<stdio.h>
int sum=4443;
int saa( int a,int b){
    register int suum =3;
    suum++;
    return suum;
}
int main(){
printf("The value of a is %d\n",saa(4,3));
printf("The value of a is %d\n",saa(4,3));
printf("The value of a is %d\n",saa(4,3));
printf("The value of a is %d\n",saa(4,3));
printf("The value of a is %d\n",sum);
printf("The value of a is %d\n",sum);
return 0;
}