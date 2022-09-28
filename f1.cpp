#include <iostream>
using namespace std;
class cat
{
    int x;
    int y;
    friend void friends(cat s);

public:
    cat()
    {
        x = 444; // these is an contructor incoke when object is created
        y = 333; // if you are set other value to private data
    }
    void setdata(int x1, int y1)
    {
        x = x1;
        y = y1;
    }
    void getdata()
    {

        cout << "The value of x is:" << x << endl;
        cout << "The value of y is:" << y << endl;
    }
};

void friends(cat s)
{ // here s mean d object
  // we asign s object  to e object that's why all properties
    // s is come into e

    cout << "These all value of all friends fucntion" << endl; // e is the object here new
    cout << "friends =The value of x is " << s.x << endl;      // that's why he's memory  are new contructor work here
    cout << "friends =The value of y is " << s.y << endl;
} // i am declraide these fucntion is as a friendfucntion of class cat
// these function abelto access private data of class cat resion is these fucntion is friends fuction of class cat

int main()
{
    cat d;
    int x, y;
    cout << "Enter two number for set value of x1,y1" << endl;
    cin >> x >> y;
    d.setdata(x, y);
    d.getdata();
    friends(d);
    return 0;
}