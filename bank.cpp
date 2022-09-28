#include<iostream>
using namespace std;
class bankdeposit
{
private:
    int year;
    int time;
    float rate;
    int rate;
    int returnvalue;
public:
    bankdeposit();
    
    bankdeposit(int amount int y,int t,int r);
    bankdeposit(int amount int y,int t,int R);
void show(void){
    
    
    
}

};


bankdeposit::bankdeposit()
{
}

bankdeposit::bankdeposit(int amount,int y,int t,int r)
{
     year=y;
    time=t;
    rate=r;
    returnvalue=amount;
    for (int  i = 0; i < year; i++)
    {
        returnvalue=returnvalue*(1+r);
    }

}

bankdeposit::bankdeposit(int y,int t,int R)
{
    year=y;
    time=t;
    rate=R;
}



int main(){

 
return 0;
}