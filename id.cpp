#include <iostream>
using namespace std;
class base
{
public:
    int x;
    virtual void setData(int b) { x = b; }
    virtual void getData(void) { cout << " base class X is :" << x << endl; }
};
class derived : public base
{
public:
    int y;
    void setData(int a) { y = a; }
    void getData(void) { cout << " derived class Y is :" << y << endl; }
};
int main()
{
    base *a;
    derived derived_obj;
    a = &derived_obj;
    a->setData(44);
    a->getData();

    return 0;
}
