#include <iostream>
using namespace std;
#define max 5
class ird
{
public:
    int item[max], right, left;
    void create(ird *q);
    void insert_right(ird *, int);
    int rem_left(ird *);
    int rem_right(ird *);
    void display(ird *);
};
void ird::create(ird *q)
{
    q->right = -1;
    q->left = -1;
    cout << "ird is create\n";
}

void ird::insert_right(ird *q, int element)
{ // generally element inserted from right side of dqueue
    if (q->right == max - 1)
    {
        cout << "ird is overflows..\n";
    }

    else
    {
        ++q->right;
        q->item[q->right] = element;
    }
}
int ird::rem_left(ird *q)
{
    if (q->left == q->right)
    {
        cout << "ird is underflows...\n";
    }

    else
    {
        ++q->left;
        return (q->item[q->left]);
    }
}
int ird::rem_right(ird *q)
{
    if (q->left == q->right)
    {
        cout << "ird is underflows...\n";
    }
    else
    {

        return (q->item[q->right--]);
    }
}
void ird::display(ird *q)
{
    int i;
    for (i = q->left + 1; i <= q->right; i++)
    {
        cout << "\t" << q->item[i];
    }
}
int main()
{
    int inp, elem, rmelement;
    ird obj, *q, p;
    q = &p;
    cout << "Program to implement input restricted dquue\n";
    do
    {
        cout << "\n1.create\n2.insert\n3.rem_left\n4.rem_right\n5.display\n6.exit\n";
        cin >> inp;
        switch (inp)
        {
        case 1:
            obj.create(q);
            break;
        case 2:
            cout << "Enter element to insert in queue\n";
            cin >> elem;
            obj.insert_right(q, elem);
            break;
        case 3:
            rmelement = obj.rem_left(q);
            cout << rmelement << " is removed\n";
            break;
        case 4:
            rmelement = obj.rem_right(q);
            cout << rmelement << " is removed\n";
            break;

        case 5:
            obj.display(q);
            break;
        case 6:
            exit(1);
        }
    } while (inp != 6);
    return 0;
}