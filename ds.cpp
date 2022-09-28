// following program to show vertiual base class 
//these program example of heararical inheritance
#include<iostream>
using namespace std;
class Gf{
   //i am change here private to public because private member 
    // or atribute never inherited this is resion behind why i am change 
    // private to public
     public:
    int a=4;
    void getdata(void){
        cout<<"I am grand father"<<endl;
    }
};
class parent1:virtual public Gf{ 
    int da;
    public:
    void getdata(void){
        cout<<"I am a parent no 1"<<endl;
    }
};
class parent2:virtual public Gf{
    int dda;
    public:
    void getdata(void){
        cout<<"I am a parent no 2"<<endl;
    }
};
class child:public parent1,public parent2{
    int as;
    public:
    void getdata(void){
        cout<<"I am child having two parent's"<<endl;
    }
};
int main(){
 child l;
 cout<<""<<l.a;
return 0;
}