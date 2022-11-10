#include <iostream>
#define max 5
using namespace std;
class queue
{
public:
    int item[max], rear, front;
    void create(queue *);
    void isempty(queue *);
    void isfull(queue *);
    void display(queue *);
    void insert(queue *, int);
    int remove(queue *);
};
void queue::create(queue *p)
{
    p->rear = p->front = -1;
    cout << "Queue is created\n";
}
void queue::isempty(queue *p)
{
    if (p->rear == p->front)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        cout << "Queue is not empty\n";
    }
}
void queue::isfull(queue *p)
{
    if (p->rear == max - 1)
    {
        cout << "Queueu is full\n";
    }
    else
    {
        cout << "Queue is not full\n";
    }
}
void queue::insert(queue *p, int x)
{
    if (p->rear == max - 1)
    {
        cout << "Queue overflow..\n";
    }
    else
    {
        ++p->rear;
        p->item[p->rear] = x;
    }
}
int queue::remove(queue *p)
{
    if (p->rear == p->front)
    {
        cout << "Queuue is underflow..\n";
    }
    else
    {
        ++p->front;
        cout << p->item[p->front] << " removed from queue\n";
        return p->item[p->front];
    }
}
void queue::display(queue *p)
{
    for (int i = p->front + 1; i <= p->rear; i++)
    {
        cout << p->item[i] << " ";
    }
    cout << "\n";
}
int main()
{
    int n, z, ch;
    queue obj, *p, q;
    p = &q;
    do
    {
        cout << "Enter your choise\n";
        cout << "\n1.create\n2.isempty\n3.isfull\n4.insert\n5.remove\n6.display\n7.exit\n";
        cin >> ch;
        switch (ch)
        {
        case 1:
            obj.create(p);
            break;
        case 2:
            obj.isempty(p);
            break;
        case 3:
            obj.isfull(p);
            break;
        case 4:
            cout << "Enter any number\n";
            cin >> n;
            obj.insert(p, n);
            break;
        case 5:
            z = obj.remove(p);
            break;
        case 6:
            obj.display(p);
            break;
        case 7:
            exit(1);
        }
    } while (ch != 7);

    return 0;
}