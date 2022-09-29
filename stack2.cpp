#include <iostream>
using namespace std;
#define max 20
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
    char infix[20], postfix[20], ch;
    int i = 0, j = 0;
    stack *p, q, obj;
    p = &q;
    obj.create(p);
    cout << "Enter any infix expresion\n";
    cin >> infix;
    while (infix[i] != '\0')
    {
        if (infix[i] == 'a' || infix[i] == 'b' || infix[i] == 'c' || infix[i] == 'd' || infix[i] == 'e' || infix[i] == 'x' || infix[i] == 'y' || infix[i] == 'm' || infix[i] == 'n' || infix[i] == 'p' || infix[i] == 'q' || infix[i] == 'r')
        {
            postfix[j] = infix[i];
            j++;
        }
        else if (infix[i] == '(' || infix[i] == '$' || infix[i] == '*' || infix[i] == '/' || infix[i] == '-' || infix[i] == '+' || infix[i] == '^')
        {

            obj.push(p, infix[i]);
        }
        else
        // (infix[i] == ')')
        {
            while (p->item[p->top] != '(')
            {
                ch = obj.pop(p);
                if (ch != '(')
                {
                    postfix[j] = ch;
                    j++;
                }
            }
        }
        i++;
    }
    if (p->top != -1)
    {
        while (p->top != -1)
        {

            ch = obj.pop(p);
            if (ch != '(')
            {
                postfix[j] = ch;
                j++;
            }
        }
    }
    postfix[j] = '\0';
    cout << postfix;
    return 0;
}