#include <iostream>
using namespace std;
 inline int sam(int a, int b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Enter two number" << endl;
    cin >> a >> b;
    cout << "The addition of " << a << " and " << b << " is " << sam(a, b);
    return 0;
}