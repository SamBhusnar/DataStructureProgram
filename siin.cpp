#include <iostream>
using namespace std;
class superclass
{
    int data1;

public:
    int data2;
    void setdata(void);
    int getdata1(void);
    int getdata2(void);
};
void superclass::setdata(void)
{
    data1 = 10;
    data2 = 20;
}
int superclass::getdata1(void)
{
    return data1;
}
int superclass::getdata2(void)
{
    return data2;
}
class sub_class : private superclass
{

    int data3;

public:
    void process();
    void display();
};
void sub_class::process()
{
    setdata(); // process run  for any object setdata also run that object process run that object
    data3 = data2 * getdata1();
}

void sub_class::display()
{
    cout << "The value of data1 is :" << getdata1() << endl;
    cout << "The value of data2 is :" << data2 << endl;
    cout << "The value of data3 is :" << data3 << endl;
}
int main()
{
    sub_class l;
    l.process(); // prepare data3
    l.display(); // give data1 data2  data3

    return 0;
}
