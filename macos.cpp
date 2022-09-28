#include <iostream>
using namespace std;
// we learn about contructor and distructor
class calculator
{
    int x;
    int y;
    void setdata()
    {
        x = 4;
        y = 5;
    }

public:
    void display()
    {
        // setdata();
        cout << x << " + " << y << "i";
    }
    calculator(void);
};
calculator::calculator(void)
{
    x = 0;
    y = 0;
}
int main()
{
    calculator s;
    s.display();
    
    return 0;
}
//some properties of contructor from following 
//• The name of the constructor must be same as that of the class

 

// • No return type can be specified for constructor

 

// • A constructor can have parameter list

 

// • The constructor function can be overloaded

 

// • They cannot be inherited but a derived class can call the base class constructor

 

// • The compiler generates a constructor, in the absence of a user defined constructor.

 

// • Compiler generated constructor is public member function

 

// • The constructor is executed automatically when the object is created

 

// • A constructor can be used explicitly to create new object of its class type
                       //some type of contructor 
// 1.default contructor 
// 2.parameterized contructor 
// 3.copy constructor 
// 4.dyanamic constructor
// 5.arumented constructor
// 6.overloaded constructor

