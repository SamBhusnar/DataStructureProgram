#include <iostream>
using namespace std;
// int add()
// {
//     // cout << "Kindly give minimum an argument" << endl;
//     return -1;
// }
// int add(int a)
// {
//     return (a);
// }
// int add(int a, int b)
// {
//     return (a + b);
// }
// int add(int a, int b, int c)
// {
//     return (a + b + c);
// }
void add(string name, string mname, string sname)
{
    cout << "i'm string" << endl;
    cout << name << " " << mname << " " << sname;
}
int add(int a, int b, int c)
{
    cout << "im int" << endl;
    return (a + b + c);
}
float add(float a, float b, float c)
{
    cout << "i'm float" << endl;
    return (a + b + c);
}
float add(double a, double b, double c)
{
    cout << "i'm double" << endl;
    return (a + b + c);
}
int main()
{
    // cout<< add(4,9,10);
    add("Sam", "Ramchandra", "Bhusnar");
    cout << endl;
    cout << add(2, 4, 6) << endl;
    cout << add(2.0f, 3.0f, 4.0f) << endl;
    cout << add(2.0, 3.0, 4.0) << endl;
    return 0;
}