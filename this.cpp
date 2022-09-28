#include <iostream>
using namespace std;
class A
{
    int a;

public:
    int ay; // this->l; this-> == *this when any object access class
    // data then this pointer crate implicite/
    // A &setData(int a)
    void setData(int a)
    {
        this->a = a;
        // return *this;
    }
    void getData(void)
    {
        cout << "The value of a is :" << a << endl;
    }
    A(void)
    {
        cout << "EXICUTION STARAT NOW:" << endl;
    }
};
int main()
{
    A l;
    A *ptr = &l;
    (*ptr).ay = 4;
    cout << "The value of ay for object l is :" << (*ptr).ay << endl;
    l.ay = 44;
    cout << "The value of ay is :" << l.ay << endl;
    A a;
    a.setData(444);
    a.getData();
    return 0;
}