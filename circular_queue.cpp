#include <iostream>
using namespace std;
#define max 5
class Queue
{
public:
    int item[max], rear, front;
    void create(Queue *q);
    void isfull(Queue *);
    void isempty(Queue *);
    void insert(Queue *, int);
    int remove(Queue *);
    void display(Queue *);
};
void Queue::create(Queue *q)
{
    q->front = -1;
    q->rear = -1;
    cout << "Circular Queue is create\n";
}
void Queue::isfull(Queue *q)
{
    if ((q->front == 0 && q->rear == max - 1) || (q->rear + 1 == q->front))
    {
        cout << "Circular queue is full\n";
    }
    else
    {
        cout << " Circular queue is not full\n";
    }
}
void Queue::isempty(Queue *q)
{
    if (q->front == -1)
    {
        cout << "Circular Queue is empty\n";
    }
    else
    {
        cout << "Circular Queus is not empty\n";
    }
}
void Queue::insert(Queue *q, int element)
{
    if ((q->front == 0 && q->rear == max - 1) || (q->front == q->rear + 1))
    {
        cout << "Circular queue is overflow..\n";
    }
    else
    {
        if (q->front == -1)
        {
            q->front = q->rear = 0;
        }
        else
        {
            q->rear = (q->rear + 1) % max;
        }
        q->item[q->rear] = element;
    }
}
int Queue::remove(Queue *q)
{
    int z;
    if (q->front == -1)
    {
        cout << "Circular queue is underflow..\n";
    }
    else
    {
        z = q->item[q->front];
        if (q->front == q->rear)
        {
            q->front = q->rear = -1;
        }
        else
        {
            q->front = (q->front + 1) % max;
        }
        return z;
    }
}
void Queue::display(Queue *q)
{
    int i;
    for (i = q->front; i != q->rear; i = (i + 1) % max)
    {
        cout << "\t" << q->item[i];
    }
    cout << "\t" << q->item[q->rear];
}
int main()
{
    int inp, elem, rmelement;
    Queue obj, *q, p;
    q = &p;
    cout << "Program to implement circular queue\n";
    do
    {
        cout << "\n1.create\n2.isfull\n3.isempty\n4.insert\n5.remove\n6.display\n7.exit\n";
        cin >> inp;
        switch (inp)
        {
        case 1:
            obj.create(q);
            break;
        case 2:
            obj.isfull(q);
            break;
        case 3:
            obj.isempty(q);
            break;
        case 4:
            cout << "Enter element to insert in queue\n";
            cin >> elem;
            obj.insert(q, elem);
            break;
        case 5:
            rmelement = obj.remove(q);
            cout << rmelement << " is removed\n";
            break;
        case 6:
            obj.display(q);
            break;

        case 7:
            exit(1);
            break;
        }
    } while (inp != 7);

    return 0;
}