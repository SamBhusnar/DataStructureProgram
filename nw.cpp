#include <iostream>
using namespace std;
// classes is template for object ,object are use classes vairable to sore ithire data
class cat // cat is class name
{
    int c, d; // by default in c++ classes data is private until we declaired it
       void something(void);        // default value of c and d is garbage value
public:
    int k;                  // garbage value of c++ come here what value in that memory block that show us c++
    void setdata(int, int); // it is take two integer as a inpute
    void getdata(void);
    // it is default member function does not take any argument as input it is just print
};
void cat::something(void)
{
int lab;

    cout<<"Enter any number to initialize k "<<endl;
cin>>lab;
k=lab;
} // we can create here object
void cat::setdata(int a, int b) // syntax of method defination in outside of class is : return_typeOf_method class_name::method_name(argument){};

{
    c = a; // we can access private data using member function
    d = b; // here c and d  is private variable of class cat;
}
void cat::getdata()
{ // it is just use for print value of member function
int dk;
    something();
    cout << "You entered number of c is " << c << endl;
    cout << "You entered number of d is " << d << endl;
    cout << "You entered number of k is " << k << endl;
}

int main()
{
    cat obj;
    // obj.something();
    int a, b;
    cout << "Enter any two number" << endl;
    cin >> a >> b;
    // because every object take thire own memory therfor every object unique adress
    obj.setdata(a, b);
    obj.getdata();
    cat name;
    int l, m;
    cout << "Enter l and m value" << endl;
    cin >> l >> m;
    name.setdata(l, m);
    name.getdata(); // give garbage value of k because unintialize vairable value is in c/c++ is garbage valuesd
  

    return 0;
}
// If we want initilize any function before run therefor nesting of funtion consetp are come in picture syntax just funtion name are need
// remember one thing if those funtion take any argument then they take thire argumet
