#include <iostream>
using namespace std;
class dog
{
    int num;
    int num1;
    void setdataa()
    {
        num = 4443434;
        num1 = 4444;
    }

public:
    void setdata(int a, int b)
    {
        // num = a;
        // num1 = b;
    }
    void display(void);
} d; // we can create here object
void dog::display()
{
    cout << "Your entered number is in num:" << num << endl;
    cout << "Your entered number is in num1:" << num1 << endl;
}

int main()
{
    int x, y;
    cout
        << "Ente two number" << endl;
    cin >> x >> y;

    d.setdata(x, y); // it is member public fucntion
    d.display();     // it is member public fucntion

    return 0;
}