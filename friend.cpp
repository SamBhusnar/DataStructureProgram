#include <iostream>
using namespace std;
class sam
{
    int lenght;
    int width;
    friend int multiplication(int ,int );
    friend int division(int ,int );

public:
    void setnumber(int x, int y)
    {
        lenght = x;
        width = y;
    }
    int addnum(void)
    {
        return lenght + width;
    }

    void displaynumber(void)
    {
        cout << "length :" << lenght << endl;
        cout << "width :" << width << endl;
        cout << "Addition is :" << addnum() << endl;
    }
} k;
int division(int x,int y)//if we not give value of any fucntion then those fucntion use garbage value or
{sam k;
    length=x;
    widht=y;
    return ((k.lenght) / (k.width));
}
int multiplication(int x,int y )
{
    sam k;
    k.setnumber(x, y); // set number addnum and displaynumber is public funtion anyown access them so multiplicion fuction access them using dot operator
    k.addnum();
    k.displaynumber();
    cout << "The division is 27*3 :" << division( x, y) << endl; //  these division scope is for these multiplication function
    return (k.lenght) * (k.width);
}
int main()
{
    cout << "for 6 and 2 start operation" << endl;
    sam l;
    l.setnumber(6, 2);
    l.addnum();
    l.displaynumber();
    cout << "for 6 and 2 end operation" << endl;
    cout << "for 4*2 start operation " << endl;

    cout << "The multiplicaion of 4*2 is  :" << multiplication() << endl;
    cout << "for 4*2 end operation " << endl;
    cout << "The division 27*3 :" << division() << endl;

    return 0;
}