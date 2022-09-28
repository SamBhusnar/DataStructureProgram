#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(void)
    {
        // data1 = a;
        cout << "Base1 class contructor is called with number:"  << endl;
    }
};
class base2
{
    int data2;

public:
    // base2(int b)
    // {
    //     data2 = b;
    //     cout << "base2 class contructor are called with number:" << b << endl;
    // }
};
class derived : virtual public base2, virtual public base1
{
    int data3;

public:
    // derived(int a, int b, int c) : base1(a), base2(b)
    // {
    //     data3 = c;
    //     cout << "\nderived class contructor is called with number:" << c << endl;
    // }
};
int main()
{
    // cout << "Enter three number now you think " << endl;
    // int l, k, h;
    // cin >> l >> k >> h;
    // derived ll(l, k, h);
    derived l;
    return 0;
}
