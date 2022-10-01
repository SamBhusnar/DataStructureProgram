// author : Sam Bhusnar & Ranjit Deskmukh
#include <iostream>
using namespace std;
#define max 5
class Queue
{
public:
    int item[max], rear, front;
    void create(Queue *q)
    {
        q->front = -1;
        q->rear = -1;
        cout << "Queue is create\n";
    }
    void isfull(Queue *);
    void isempty(Queue *);
    void insert(Queue *, int);
    int remove(Queue *);
    void display(Queue *);
};
void Queue::isfull(Queue *q)
{
    if (q->rear == max - 1)
    {
        cout << "Queue is full\n";
    }
    else
    {
        cout << "Queue is not full\n";
    }
}
void Queue::isempty(Queue *q)
{
    if (q->rear == q->front)
    {
        cout << "Queue is empty";
    }
    else
    {
        cout << "Queus is not empty";
    }
}
void Queue::insert(Queue *q, int element)
{
    if (q->rear == max - 1)
    {
        cout << "Queue is overflow...";
    }
    else
    {
        ++q->rear;
        q->item[q->rear] = element;
    }
}
int Queue::remove(Queue *q)
{
    if (q->rear == q->front)
    {
        cout << "Queue is underflow...";
    }
    else
    {
        ++q->front;
        cout << q->item[q->front] << " is element is removed \n";
        return (q->item[q->front]);
    }
}
void Queue::display(Queue *q)
{
    int i;
    // int save = q->front;
    // // q->front = -1; // this statement introduce  an bug
    // for (i = q->rear; i > save; i--)
    // {
    //     ++q->front;
    //     cout << q->item[q->front] << '\n';
    // }
    // q->front = save;
    for(i=q->front+1;i<=q->rear;i++){
        cout<<"\n"<<q->item[i];
    }
}
int main()
{
    int inp, elem, rmelement;
    Queue obj, *q, p;
    q = &p;
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

// this program have so much logical error if you've think in depth