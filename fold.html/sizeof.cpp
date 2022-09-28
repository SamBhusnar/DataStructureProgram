#include<iostream>
using namespace std;
int main(){

    int store1=sizeof(double);
    int store2=sizeof(char);
    int store3=sizeof(bool);
    int store4=sizeof(float);
    int store5=sizeof(int);
    int store=sizeof(void);
    cout<<"void    :"<<store<<endl;
    cout<<"double  :"<<store1<<endl;
    cout<<"char    :"<<store2<<endl;
    cout<<"float   :"<<store4<<endl;
    cout<<"bool    :"<<store3<<endl;
    cout<<"int     :"<<store5<<endl;
    cout<<"in am samadhan";

    return 0;
}