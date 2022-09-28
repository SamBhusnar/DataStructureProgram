#include <iostream>
using namespace std;
class sam
{
    int num;  // it is a private variable we can't access directally them
    int num2; // it is a private variable we can't access directally them
    // for accessing these variable we need memeber function through member function we can access them directally

public:
    int setnum(int a, int b); // these is member fuction using these we can acess private data of these class, it is a member fucntion get parameter two
    int getnum(void);         // these is member fuction 2 using these we can acess private data of these class
};
int sam::setnum(int a, int b)
{
    num = a;
    num2 = b;
}
int sam::getnum(void)
{
    cout << "these is an num:" << num << endl;
    cout << "these is an num2:" << num2 << endl;
    cout << "It is end here" << endl;
}

int main()
{
    char in;
    cout << "To start our program press something you want character or integer" << endl;
    cin >> in;
    sam cat, dog;
    cout << "Enter two number\n";
    int a, b;
    cin >> a >> b;
    cat.setnum(a, b);
    cat.getnum();
    int d, f;
    cout << "Enter two number\n"
         << endl;
    cin >> d >> f;
    dog.setnum(d, f);
    dog.getnum();
    return 0;
}