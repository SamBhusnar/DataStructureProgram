#include <iostream>
using namespace std;
#define max 5
class stack
{
public:
    int item[max], top;
    void create(stack *);
    void isfull(stack *);
    void isempty(stack *);
    int pop(stack *);
    void push(stack *, int);
    void display(stack *);
};
void stack::create(stack *p)
{
    cout << "Stack is created\n";
    p->top = -1;
}
void stack::isfull(stack *p)
{
    if (p->top == max - 1)
    {
        cout << "stack is full\n";
    }
    else
    {
        cout << "stack is not full\n";
    }
}
void stack ::isempty(stack *p)
{
    if (p->top == -1)
    {
        cout << "stack is empty\n";
    }
    else
    {
        cout << "stack is not empty\n";
    }
}
void stack::push(stack *p, int element)
{
    if (p->top == max - 1)
    {
        cout << "stack overflows...";
    }
    else
    {
        ++p->top;
        p->item[p->top] = element;
    }
}
int stack::pop(stack *p)
{
    if (p->top == -1)
    {
        cout << "stack underflow...";
    }
    else
    {
        cout << p->item[p->top] << " is removed from stack";
        return (p->item[p->top--]);
    }
}
void stack::display(stack *p)
{
    int i;
    for (i = p->top; i >= 0; i--)
    {
        // cout << p->item[p->top] << "\n";
        // --p->top;
        cout << p->item[i] << '\n';
    }
}
int main()
{
    int save, inp, element;
    stack *p, obj, q;
    p = &q;
    do
    {
        cout << "\n1.create\n2.isfull\n3.isempty\n4.push\n5.pop\n6.display\n7.exit\n";
        cin >> inp;

        switch (inp)
        {
        case 1:
            obj.create(p);
            break;
        case 2:
            obj.isfull(p);
            break;
        case 3:
            obj.isempty(p);
            break;
        case 4:
            cout << "Enter any element to push into stack \n";
            cin >> element;
            obj.push(p, element);
            break;
        case 5:
            save = obj.pop(p);

            break;
        case 6:
            obj.display(p);
            break;
        case 7:
            exit(1);
            break;
        }
    } while (inp != 7);

    return 0;
}