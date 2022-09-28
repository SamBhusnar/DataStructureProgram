#include <iostream>
using namespace std;
class overload
{
private:
    int x, y, z;

public:
    overload(void); // thse is called default contructor
    // overload(int a);
    overload(int a, int b);
    overload(int a, int b, int c);
    void display(void);
};
overload::overload(void)
{
    x = 4;
    y = 5;
    z = 9;
}
// overload::overload(int a)
// {
//     x = a;
//     y = 5;
//     z = 9;
// }
overload::overload(int a, int b = 0)
{
    x = a;
    y = b; // if user not give an value of these then defaullt value is '0';
    z = 9;
}
overload::overload(int a, int b , int c)
{
    x = a;
    y = b; // default value is 0
    z = c; // default value is 0
}
void overload::display()
{
    cout << "x=" << x << endl;
    cout << "y=" << y << endl;
    cout << "z=" << z << endl;
}
int main()
{
    overload f,l(4),d(5,4),j(4,4,4);
    cout<<"These for f"<<endl;
    f.display();
    cout<<"These for l"<<endl;
    l.display();
    cout<<"These for d"<<endl;
    d.display();
    cout<<"These for j"<<endl;
    j.display();

    return 0;
}