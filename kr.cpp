#include <iostream>
using namespace std;
class base
{
    // int x,y; // by contrutor y is initialize first and then x is initialize second
    int y, x; // this order is not important when we define x and y inside of contrutor
    // this order important when we do initialized any list through contructor
    //  int x, y; // by contrutor x is initialize first and then y is initialize second
    //  this order of execution is also matter in contructor also

public:
    // base(int l,int k):x(l),y(k+l)
    // base(int l,int k):x(l+k),y(k)
    // base(int l,int k):x(l),y(k+x)
    // base(int l, int k) : x(l + y), y(k) // it is give an unimaginable output because order of execution is importat here first x is initialize and then y is initialize
    // base(int l,int k):x(l+y),y(k)
    base(int l, int k)
    {
        y = x;
        x = y; // here order of execution also improtant
        cout << "Contructor executed" << endl;
        cout << "The value of x is :" << x << endl;
        cout << "The value of y is :" << y << endl;
    }
};
int main()
{
    base k(4, 6);
    return 0;
}