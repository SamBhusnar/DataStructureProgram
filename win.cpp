#include <iostream>
using namespace std;
class win
{
    int x;
    int y;

protected:
    int z;

public:
    int l;
    void setdata(int a, int b, int c, int d)
    {
        x = a;
        y = b;
        z = c;
        l = d;
    }
    void getdata(void)
    {
        cout << "The value of x is " << x << endl;
        cout << "The value of y is " << y << endl;
        cout << "The value of z is " << z << endl; // member fucntion also acess private protected public data directally///
        cout << "The value of l is " << l << endl; // member fucntion also acess private protected public data directally///
        // we can access direcrally public data by object and set data of that object
    }
};

int main()
{

    win l;
    //  l.getdata();
    //  cout<<"now started setvalue"<<endl;
    //  l.setdata(1,2,3,4);
    //  l.getdata();
    l.l = 444;
    cout << "The value of l is:" << l.l << endl;
    return 0;
}