// friend fucntion and farward declaration
#include <iostream>
using namespace std;
class complex; // these is forward declairation  to say copiler class complex come in future

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }
    float sub(float a, float b)
    {
        return (a - b);
    }

    void sumrealcomplex(complex o1, complex o2); // we can give object here but not use
    void sumcomcomplex(complex o1, complex o2);  // we can give object here but not use
    // private data of class complex because what garanty you wright private data present here
    //  those present in the class complex
    // if we give defination here then those defination not use priavate data
    //  of class complex otherwise give an error
    //  why error give because compiler say what garanty you said priavate data is present jn class complex that's why we not declaired here
};
class complex
{
    int a, b;

public:
    // syntax to declared classe fucntion as friend
    //  friend return_typeof_funtion class_name :: function_name(arguments);
  //thes is individual classes function  as friend
    // friend void calculator::sumrealcomplex(complex, complex);
    // friend void calculator::sumcomcomplex(complex, complex);
    //these is whole class as friend
    friend class calculator;

    //systax is [friend class class_name];
    void setdata(int a, int b);
    void getdata();
};
void complex::setdata(int x, int y)
{
    a = x;
    b = y;
}
void complex::getdata()
{
    cout << a << " + " << b << "i" << endl;
}

void calculator::sumrealcomplex(complex o1, complex o2)
{

    cout << (o1.a + o2.a) << " + ";
}
void calculator::sumcomcomplex(complex o1, complex o2)
{

    cout << (o1.b + o2.b) << "i" << endl;
}
int main()
{
    complex first, second;
    int s, t;
    cout << "Enter s and t value" << endl;
    cin >> s >> t;
    first.setdata(s, t);
    cout << "Enter k and l value " << endl;
    int k, l;
    cin >> k >> l;
    second.setdata(k, l);
    first.getdata();
    second.getdata();
    calculator calc;
    calc.sumrealcomplex(first, second);
    calc.sumcomcomplex(first, second);

    return 0;
}
// these program declaire one class member as friend of another class
// withour friend fucntion not noown access private data directally or indirectally
