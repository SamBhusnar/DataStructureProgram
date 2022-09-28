#include <iostream>
using namespace std;
class base
{
    int salary; // we can use this templete for other class object
    int id;     // also this template use for to help to other class object ok

public:
    void setNum(void) {}
    virtual void setData(int, int) = 0;
    virtual void getData(void) = 0;
    base(void)
    {
        cout << "Minimum salary start from 1000 and id started from 100:" << endl;
        salary = 1000;
        id = 100;
    }
};

void base::setData(int a, int b)
{
    salary = a;
    id = b;
}
void base::getData()
{
    cout << "Salary:" << salary << endl;
    cout << "Id:" << id << endl;
}
class derived1 : public base
{
    int x;
    int y;

public:
    void setData(int, int);
    void getData(void);
    derived1(void)
    {
        x = 0;
        y = 0;
    }
};
void derived1::setData(int a, int b)
{
    x = a;
    y = b;
}
void derived1::getData()
{
    cout << "The value of X and Y is  respectively :" << x << "," << y << endl;
}
class derived2 : public base
{
    int a;
    int b;

public:
    void setData(int, int);
    void getData(void);
    derived2(void)
    {
        a = 0;
        b = 0;
    }
};
void derived2::setData(int x, int y)
{
    a = x;
    b = y;
}
void derived2::getData(void)
{
    cout << "The value of a and b is respectively is :" << a << "," << b << endl;
}

int main()
{
    derived1 obj_derived1;
    derived2 obj_derived2;
    base *two[2];

    two[0] = &obj_derived1;
    two[1] = &obj_derived2;
    two[0]->setData(4, 4);
    two[1]->setData(44, 44);

    two[0]->getData();
    two[1]->getData();

    return 0;
}