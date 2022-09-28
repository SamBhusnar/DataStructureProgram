#include <iostream>
using namespace std;
class mac
{
    int a, b;

public:
    void printdata(void);
    mac(void);
    mac(int x, int y);
    mac(int p, int q);
};
void mac::printdata(void)
{
    cout << "The value of a and b is " << a << " " << b << endl;
}
// mac::mac(int x, int y = 4)
// {
//     a = x; // these is not default constrouctor
//     // these is parameterised contructor take 2 parameter
//     b = y;
// }
mac::mac(int p, int q = 5)
{
    a = p;
    b = q;
}
mac::mac(void)
{
    // these is default constroctor  it not take even one parameter
    a = 4;
    b = 4;
}
int main()
{
    mac a;
    a.printdata();
    mac sit(4, 5);
    sit.printdata();
    return 0;
}