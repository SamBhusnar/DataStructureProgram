// Ranjit Deshmukh and Samadhan Bhusnar
// reverse entered string using stack
#include <iostream>
#include <string.h>
using namespace std;
#define max 20
class stack
{
public:
    int item[max], top;
    void create(stack *);
    int pop(stack *);
    void push(stack *, int);
};
void stack::create(stack *p)
{
    cout << "Stack is created\n";
    p->top = -1;
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
        return (p->item[p->top--]);
    }
}
int main()
{
    char str[20], rev[20], ch;
    int i = 0, j = 0;
    stack *p, q, obj;
    p = &q;
    obj.create(p);
    cout << "Enter any string \n";
    cin >> str;
    while (str[i] != '\0')
    {
        obj.push(p, str[i]);
        i++;
    }
    while (p->top != -1)
    {
        ch = obj.pop(p);
        rev[j] = ch;
        j++;
    }
    rev[j] = '\0'; // manual end of rev array;
    cout << rev;
    return 0;
}