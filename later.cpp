#include <iostream>
using namespace std;
class frienD
{
    int friendValue;
    int x;
friend int frienfucntion(frienD ,frienD );//just object come here
public:
    void setData(void);
    void getData(void);
};
void frienD::setData(void)
{
    cout << "Enter you frienDvalue:" << endl;
    cin >> friendValue;
    cout << "Enter you mobile no:" << endl;
    cin >> x;
}
void frienD::getData()
{
    cout << "Your friend value is :" << friendValue << endl;
    cout << "Your mobile number is :"<<x<<endl;
  
}
int frienfucntion(frienD a,frienD b ){

 return ((a.friendValue)+(a.x)+(b.friendValue)+(b.x));
}
int main()
{
    frienD l,k;
    l.setData();
    l.getData();
    k.setData();
    k.getData();
    int val=frienfucntion(l,k);
    cout<<"The value of addition of friend value and x is:"<<val<<endl;

    return 0;
}