#include<iostream>
using namespace std;
class sam{
    int id;
    int salary;
    char fav_char;
    int z;
    void setdatasalary(int l){
        cout<<"Enter  salary of your employee"<<endl;
        cin>>salary;
        l=z;
    }
    void setdataFav_char(int a){
        cout<<"Enter  fav_char of your employee"<<endl;
        cin>>fav_char;
        z=a;
    }
    
    void getdata(void){
        cout<<"Your employee id is:"<<id<<endl;
        cout<<"Your employee salary is:"<<salary<<endl;
        cout<<"Your employee fav_char is:"<<fav_char<<endl;
    }
    void setdataId(void){
        cout<<"Enter  id of your employee"<<endl;
        cin>>id;
    }
    public:
    void setdata(void){
        setdataId();
        setdatasalary( );
        setdataFav_char();
        getdata();
    }
}k;
int main(){
 k.setdata();
return 0;
}