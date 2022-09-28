#include <iostream>
using namespace std;
class earth
{
private:
    int num1;
    int num2;

public:
    void setdata(float a1, float a2)
    {
        num1 = a1;
        num2 = a2;
    }
    void getdata()
    {
        cout << "The value of a that is num1 is " << num1 << endl;
        cout << "The value of a that is num2 is " << num2 << endl;
    }
};
int main()
{
    earth obj;
    // obj.num1;//do not work as it is give an error because is is access private data directally of it's class
    // obj.num2;//do not work as it is give an error noown access private data directally
    float x, y;
    cout << "Enter two number\n";
    cin >> x >> y;

    // create earth object also know as earth varaible
    obj.setdata(x, y); // these is member fucntion of class earth it is a parameterized fucntion
    obj.getdata();     // //these is member fucntion of class earth

    return 0;
}