#include <iostream>
using namespace std;
class base
{
    int x;

public:
    base(void)
    {
        x = 0;
    }
    void show(void)
    {
        cout << "The value of x is " << x << endl;
    }
};
class derived : public base
{
    int y;

public:
    void showa(void)
    {

        cout << "The value of y is " << y << endl;
    }
};
int main()
{

    return 0;
}
//properties of inheritec
// 1.private member are not involked
//2. public & and protected  member are involked
//3.