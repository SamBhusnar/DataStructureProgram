#include <iostream>
using namespace std;
class base1
{
protected:
    int x;

public:
    void setdata1()
    {
        x = 1;
    }
    void getdata1()
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of income at " << x << " is " << income << endl;
    }

protected:
    int income;

public:
    base1(void)
    {
        income = 343;
    }
};
class base2
{
protected:
    int x;

public:
    void setdata2()
    {
        x = 2;
    }
    void getdata2()
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of income at " << x << " is " << income << endl;
    }

protected:
    int income;

public:
    base2(void)
    {
        income = 344;
    }
};
class base3
{
protected:
    int x;

public:
    void setdata3()
    {
        x = 3;
    }
    void getdata3()
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of income at " << x << " is" << income << endl;
    }

protected:
    int income;

public:
    base3(void)
    {
        income = 345;
    }
};
class derived_class : public base1, public base2, public base3
{
    //
private:
    int x;

public:
    void getdata4();

protected:
    int income;

public:
    derived_class(void)
    {
        x = 4;
        income = 346;
    }
};
void derived_class::getdata4()
{
    // setdata1();
    // setdata2();
    // setdata3();
    // getdata1();
    // getdata2();
    // getdata3();
    // cout << "The value of x is :" << x << endl;
    // cout << "The value of income at "<<x<<" is:" << income << endl;
    cout << x << endl; // here we face ambiguity because base1 base2 base3
    // protected member become protected member of derived_class
    //  and thir name is also same these one of the  is example of ambiguiy in
    // multiple inheritence in c++
    // how to solve these ambiguity
    //  following step show you how solve ambiguity in c++ multiple inheritece
    //  of
    // 1.
}
int main()
{
    derived_class d;
    d.getdata4();

    return 0;
}
// in c++ defautl contructor run when object is created of that own class
// or thir derived class
// first of all run contructor then do remaining process
// ok code line number is 126;