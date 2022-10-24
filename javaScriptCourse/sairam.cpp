#include <iostream>
using namespace std;
#include <conio.h>
#include <process.h>
#define max 5
class all
{
    int item[max], fort, rear;

public:
    void create(all *p);
    void isempty(all *p);
    void isfull(all *p);
    void insert(all *p, int x);
    int remove(all *p);
};
void all::create(all *p)
{
    q->front = q->rear = -1;
}
void all::isempty(all *p)
{
    if (q->front == -1)
    {
        cout << " circular queue is empty";
    }
    else
    {
        cout << "circular  queue is not empty";
    }
}
void all::insert(all *p, int x)
{
    if (q->front == q->rear + 1)
    {
        cout << "\n circular queue is overflow";
    }
    else
    {
        if (q->front == -1)
        {
            q->front = q->rear = 0;
        }
        else
        {
            q->rear = [q->rear + 1] % max;
        }
        q->item[q->rear] = x;
    }
}
void main()
    all *q,p, obj;
q = &p;
int ch, n, z;
do
{
    cout << "\n enter your choice";
    cout << "\n 1:create\n 2:isempty\n 3:isfull\n 4:insert\n 5:remove\n 6:display\n 7:exit";
    switch (ch)
    {
    case 1:
        obj.create(q) break;
    case 2:
        obj.isempty(q) break;
    case 3:
        obj.isfull(q) break;
    case 4:
        obj.insert(q) break;
    case 5:
        obj.remove(q) break;
    case 6:
        obj.display(q) break;
    case 7:
        exit(1);
    }
} while (ch != 7);
getch();
}
