#include <windows.h>
#include <iostream>
#include <string.h>
using namespace std;
#define max 50
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
    stack *ops, *oprnd, a, b, obj;
    char ch;
    ops = &a;
    oprnd = &b;
    obj.create(ops);
    obj.create(oprnd);
    int i = 0, j = 0;
    char infix[50], prefix[50];
    cout << "Enter any infix expression \n";
    cin >> infix;

    strrev(infix);
    cout << infix;
    Sleep(10000);
    while (infix[i] != '\0')
    {
        if (infix[i] == 'a' || infix[i] == 'b' || infix[i] == 'c' || infix[i] == 'd' || infix[i] == 'z')
        {
            obj.push(oprnd, infix[i]);
        }
        else if (infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == ')')
        {
            obj.push(ops, infix[i]);
        }
        else
        {
            while (ops->item[ops->top] != -1)
            {
                ch = obj.pop(ops);
                if (ch != ')') // one para or ')' this also
                {
                    obj.push(oprnd, ch);
                }
            }
        }

        i++;
    }
    if (ops->top != -1)
    {
        ch = obj.pop(ops);
        if (ch != '(')
        {
            obj.push(oprnd, ch);
        }
    }

    while (oprnd->top != -1)
    {
        prefix[j] = obj.pop(oprnd);
        j++;
    }
    prefix[j] = '\0';
    cout << prefix;
    return 0;
}