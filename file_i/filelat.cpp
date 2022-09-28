#include <iostream>
using namespace std;
template <class t1 = int, class t2 = int, class t3 = int>
class base
{
    t1 x;
    t2 y;
    t3 z;

public:
    void getData(t1 a, t2 b, t3 c);
    void display(void)
    {
        cout << "The value of x y z is :(" << x << "," << y << "," << z << ")" << endl;
    }
};
template <class t1, class t2, class t3>

void base<t1, t2, t3>::getData(t1 a, t2 b, t3 c)
{
    x = a;
    y = b;
    z = c;
}
template <class t1 = int, class t2 = int, class t3 = int>

float fucn1(t1 a, t2 b, t3 c)
{
    cout << "func1 called not exat president" << endl;

    return ((a + b + c) / 2.0);
}
float fucn1(int a, int b, int c)
{
    cout << "func1 called with exat president" << endl;

    return ((a + b + c) / 2.0);
}

int main()

{
    float a = fucn1(4, 6, 3);
    cout << a << endl;
    return 0;
}