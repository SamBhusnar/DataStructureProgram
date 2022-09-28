#include<iostream>
using namespace std;
class sam{
int itemId[100];
int itemprice[100];
int counter;
public:
void initcounter(void){ counter=0; }
void setprice(void);
void displayPrice(void);

};
void sam::setprice(){
    cout<<"Enter Id of your Item No"<<counter<<endl;
    cin>>itemId[counter];
    cout<<"Enter price of your Item No "<<counter<<endl;
    cin>>itemprice[counter];
counter++;
}

void sam:: displayPrice(){
    for (int  i = 0; i < counter; i++)
    {
        cout<<"The price of itemId "<<itemId[i]<<" is "<<itemprice[i]<<endl;
    }
    
}
int main(){
 sam k;
 k.initcounter();
 k.setprice();
 k.setprice();
 k.setprice();
 k.setprice();
 k.setprice();
 k.setprice();
 k.setprice();
 k.displayPrice();
return 0;
}