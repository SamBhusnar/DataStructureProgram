// samadhan bhusnar and ranjit deshmukh
// infix expression to postfix expression
#include <iostream>
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
    char infix[20], postfix[20], ch;
    int i = 0, j = 0;
    stack *p, q, obj;
    p = &q;
    obj.create(p);
    cout << "Enter any infix expresion\n";
    cin >> infix;
    while (infix[i] != '\0')
    {
        if (infix[i] == '(' || infix[i] == '$' || infix[i] == '*' || infix[i] == '/' || infix[i] == '-' || infix[i] == '+' || infix[i] == '^')
        {

            obj.push(p, infix[i]);
        }
        else if (infix[i] == ')')
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
            ch = obj.pop(p); // alert may be bug occur because of this line
        }
        else
        {
            postfix[j] = infix[i];
            j++;
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