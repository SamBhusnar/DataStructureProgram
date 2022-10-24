#include <iostream>
using namespace std;
#include <conio.h>
#include <math.h>
#define max 5
class stack
{
public:
    int item[max], top;
    void create(stack *p);
    void push(stack *p, int);
    int pop(stack *p);
};
void stack::create(stack *p)
{
    p->top = -1;
}
void stack::push(stack *p, int x)
{
    if (p->top== max - 1)
    {
        cout <<"stack is overflow...";
    }
    else
    {
        ++p->top;
        p->item[p->top] = x;
    }
}
int stack::pop(stack *p)
{
    if (p->top == -1)
    {
        cout << "stack is underflow";
    }
    else
    {
        return (p->item[p->top--]);
    }
}
int main()
{
    
    char exp[50];
    float op1, op2;
    stack *p, q, obj;
    int i=0,val;
    p = &q;
    obj.create(p);
    
       cout<< "enter any postfix expression";
    cin >> exp;
    while (exp[i] != '\0')
    {
        if (exp[i] == '*'||exp[i]=='-'||exp[i]=='+'||exp[i]=='/'||exp[i]=='$'||exp[i]=='^')
            {
                op1 = obj.pop(p);
                op2 = obj.pop(p);
                switch (exp[i])
                {

                case '+':
                    val = op1 + op2;
                obj.push(p,val);
                break;

            case '-':
                val = op1 - op2;
                obj.push(p,val);
                break;

            case '*':
                val = op1 * op2;
                obj.push(p,val);
                break;

            case '/':
                val = op1 / op2;
                obj.push(p,val);
                break;
            case '$':
                val = pow(op1, op2);
                obj.push(p, val);
                break;
            }
    }
    else 
    {
        obj.push(p, exp[i] - 48);
    }
    i++;
}
val = obj.pop(p);
cout << "\n value of postfix exp=" << val;


return 0;
}