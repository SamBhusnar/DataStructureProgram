#include <iostream>
using namespace std;
class cpy
{
    int x;

public:
    cpy(void) // thse is an default contructor
    {
        cout << "default contructor are involked" << endl;
        x = 10;
    }
    cpy(cpy &obj)
    { // here reference work like arr[] and pointer
        cout << "copy contructor are involked" << endl;
        x = obj.x; // these an copy contructor
    }
    void display()
    {
        cout << "The value of these number is " << x << endl;
    }
};
int main()
{
    cpy a;
    // cpy a(4,4);//is called as implicit call
    // cpy a= cpy (4,4);//is called as explicit call
    a.display();
    cpy b(a); //  because i am give a to b thse to object of class cpy
    // b is reasemble a
    b.display();
    cpy c;
    c = a; // default contructor are involked  all properties of a is in c;
    c.display();
    cpy sd = a;
    sd.display();
    return 0;
}