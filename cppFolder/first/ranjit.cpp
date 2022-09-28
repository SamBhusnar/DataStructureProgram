#include <iostream>
#include <string>
using namespace std;
#define max 50
class stack
{
public:
    int item[max], top;

    void create(stack *p);
    void push(stack *p, int element);
    int pop(stack *p);
};
void stack::create(stack *p)
{
    p->top = -1;
    cout << "stack is created...";
}

void stack::push(stack *p, int element)

{
    if (p->top == max - 1)
    {
        cout << "stack is empty";
    }
    else
    {
        ++p->top;
        p->item[p->top] = element;
    }
}
int stack::pop(stack *p)
{

    if (p->top == max - 1)
    {
    }
    else
    {
        return (p->item[p->top--]);
    }
}
int main()
{
    char infix[50], pre[50], ch;
    int i = 0;
    int j = 0;
    stack *ops, *oprnd, a, b, obj;
    ops = &a;
    oprnd = &b;
    obj.create(ops);
    obj.create(oprnd);
    cout << "enter any infix expression";
    cin >> infix;

    while (infix[i] != '\0')
    {
        if (infix[i] == ')' || infix[i] == '+' || infix[i] == '-' || infix[i] == '*' || infix[i] == '/' || infix[i] == '&' || infix[i] == '$' || infix[i] == '^' || infix[i] == '(')
        {
            obj.push(ops, infix[i]);
        }
        else if (infix[i] == '(')
        {
            while (ops->top != -1)
            {
                ch = obj.pop(ops);
                if (ch = !')')
                {
                    obj.push(oprnd, ch);
                }
            }
        }
        else
        {
            while (oprnd->top != -1)
            {
                pre[j] = obj.pop(oprnd);
            }
            pre[j] = '\0';
            cout << "\n prefix exp=" << pre;
        }
    }
    return 0;
}