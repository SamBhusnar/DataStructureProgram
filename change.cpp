#include <iostream>
using namespace std;
class sam
{
    int x; // now it have garbage value
    int y; // now it have garbage value
    int z; // now it have garbage value

public:
    int dam(int a, int b, int c); // it is a member fucntion having parameter three
    void dada(void);              // it is void member method it use just print value in x,y,z
};
// because these is member fucntion it can access private data of his class
int sam::dam(int a, int b, int c)
{
    y = b;
    z = c;
    x = a;
}
void sam::dada(void)
{
    cout << "The value of a is:" << x << endl;
    cout << "The value of b is:" << y << endl;
    cout << "The value of c is:" << z << endl;
}

int main()
{
    int a, b, c;
    cout << "Enter the three  value ";
    cin >> a >> b >> c;
    sam cha;                // cha is a object of class sam
    cha.dam(100, 200, 300); // now it is a call by value
    cha.dam(a, b, c);       // now it is a call by reference
    cha.dada();
    // cha object update thir own value
    return 0; // when program run succesfully then return value of operating system 0;
}