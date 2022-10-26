#include <iostream>
using namespace std;
// void swap(int a, int b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
// void swap(int &a, int &b)
// {
//     int temp = a;
//     a = b;
//     b = temp;
// }
inline int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "Kindly enter any two number please " << endl;
    cin >> a >> b;

    cout << "Product of " << a << "*" << b << "=" << product(a, b) << endl;
    // cout << "We are going to learn call by value call by reference and pointer reference\n";
    // int x, y;
    // x = 4;
    // y = 9;
    // cout << "before swap ,The value of a " << x << " and value of b is " << y << endl;
    // // swap(x, y); // call by value these values copy into function variables
    // // swap(&x, &y); // call by pointer reference we're here address of x and y pass to function
    // swap(x, y); // call by reference we just pass here reference of variable of x and y
    // cout << "after  swap ,The value of a " << x << " and value of b is " << y << endl;
    // cout << "I am sam bhusnar persuing degree of computer science in sangola college , sangola" << endl;

    return 0;
}