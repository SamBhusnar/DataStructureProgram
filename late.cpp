#include <iostream>
using namespace std;
class objpoiter
{
private:
    int x;

protected:
    int y, z;

public:
    void setdata(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    objpoiter(void);
    void getdata(void)
    {
        cout << "The value of  x is :" << x << endl;
        cout << "The value of  y is :" << y << endl;
        cout << "The value of  z is :" << z << endl;
    }
};
objpoiter::objpoiter(void)
{
    x = 0, y = 0, z = 0;
    cout << "contructor is running now " << endl;
}
int main()
{
    objpoiter k;

    k.getdata();
    cout << "controctor value override here by setdata" << endl;
    k.setdata(111, 222, 333);
    k.getdata();
    cout << "Now we set value of x,y,x we use here (*p)" << endl;
    objpoiter *p = &k;

    (*p).setdata(11, 22, 33);
    (*p).getdata();
    cout << "The value of x y and z is overided we use here p->" << endl;
    p->setdata(1, 2, 3);
    p->getdata();
    cout << "object k value is override" << endl;
    k.getdata();
    return 0;
}
