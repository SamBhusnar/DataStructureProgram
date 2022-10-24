#include<iostream.h>
#include<conio.h>
#include<process.h>
#define max 5
class all
{
      int item[max],front,rear;
      public: 
             void crete(all*);
             void isempty(all*);
             void isfull(all*);
             void insert(all*,int);
             int remove(all*);
             void display(all*);
};
void all::create(all *p)
{
      p->front=-1;
      p->rear=-1;
      cout<<"\nQueue is created...";
}
void all::isempty(all *p)


}
}