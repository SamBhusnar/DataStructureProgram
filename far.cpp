#include <iostream>
using namespace std;
class c1;
class c
{
    int data;

public:
    void add(int value)
    {
        data = value;
    }
    friend void addtwo_number(c s, c1 d);
    void display()
    {
        cout << data << endl;
    }
    friend void exchange(c *ss, c1 *f);
};
class c1
{
    friend void exchange(c *ss, c1 *f); // it get reference of that object
    int data1;

public:
    void add(int value)
    {
        data1 = value;
    }
    friend void addtwo_number(c s, c1 d);
    void display()
    {
        cout << data1 << endl;
    }
};
void addtwo_number(c s, c1 d)
{
    cout << (s.data + d.data1) << endl;
}
void exchange(c *s, c1 *d)
{
    int samd =(s->data);
s->data =d->data1;
d->data1 = samd;
}
int main()
{
    c obj;
    c1 obj1;
    obj.add(4);
    obj1.add(9);
    cout << "The value of addiing two number is :" << endl;
    (addtwo_number(obj, obj1));
    cout << "The value of obj is" << endl;
    obj.display();
    cout << "The value of obj1 is" << endl;
    obj1.display();
    cout << "Started exchange value of real objet using pointer array or referenc" << endl;
    exchange(&obj, &obj1);
    cout << "Now obj value is:" << endl;
    obj.display();
    cout << "Now obj1 value is:" << endl;
    obj1.display();

    return 0;
}