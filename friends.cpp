#include <iostream>
using namespace std;
// we use here complex number properties
// friend function ussally take object as argument
// it can not access directally pravate data of thir name need object to access thir private data
class complex
{
    int a, b;
    friend complex sumCoplex(complex o1, complex o2);

public:
    void setNumber(int x, int y)
    {
        a = x;
        b = y;
    }
    void printNumber(void);
};
void complex::printNumber()
{
    cout << "The value of a+b is : " << a << " + " << b << "i" << endl;
}
complex sumCoplex(complex o1, complex o2) // now complex is user defiend data type getinh two object o1 and o2
{
    complex o3;
    complex sam, dam;
    o3.setNumber((o1.a + o2.a), (o1.b +o2.b));
    o3.printNumber();
}
int main()
{
    complex sam;
    cout << "Enter value of a and b" << endl;
    int a, b;
    cin >> a >> b;
    sam.setNumber(a, b);
    int x, y;
    cout << "Dam object start" << endl;
    complex dam;
    cout << "Enter value of x,y" << endl;
    cin >> x >> y;
    dam.setNumber(x, y);
    sam.printNumber();
    dam.printNumber();
    // sumCoplex(sam, dam);

    return 0;
}