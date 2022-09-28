#include <iostream>
using namespace std;
class base
{
    int x, y;
    float z;

    void setdata(int , int , float );//set data is private member it is 
    // inaccecible
   
public:
base(void){
    x=0;//it is inheritenc

    y=0;
    z=0;
}
    void getdata(int l,int m,float  n){
        setdata(l,m,n);//  argumet of lmn are must same of setdata lmn 
        //otherwise give an error
        cout<<"The value of x is:"<<x<<endl;
        cout<<"The value of y is:"<<y<<endl;
        cout<<"The value of z is:"<<z<<endl;
    }
};
void base:: setdata(int a ,int b,float c){
    x=a;//after declaration we do defination here 
    y=b;
    z=c;
}



int main()
{
    base d;
    d.getdata( 4,5,4.4);




    return 0;
}