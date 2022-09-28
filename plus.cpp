// we learn about contructor type like default contructor and parameterized contructor

#include <iostream>
using namespace std;
class point
{
    int x, y;

public:
    void setpoint(int aa, int ba);
    void showpoint(void);
    point(void);
    point(int a, int b);
};
point::point(int a, int b = 9)
{
    x = a;
    y = b;
}
point::point()
{
    x = 20;
    y = 20;
}
void point::setpoint(int a, int b)
{
    x = a;
    y = b;
}
void point::showpoint()
{
    cout << "x,y=(" << x << "," << y << ")" << endl;
}
int main()
{ cout<<"Enter any two number"<<endl;
int s,y;
cin>>s>>y;
    point p(s, y); // now parameterized contructor are involked
    point q;       // now default contructor is involked.
    point r(44);   // now argumented contructor is called
    cout << "these is for p= parameterized contructor is involked 4,5 " << endl;
    p.showpoint();
    cout << "these for p= default contructor is involked 20,20" << endl;
    q.showpoint();
     cout<< "these for q = argumented contructor involked 44,9" << endl;
    r.showpoint();
    return 0;
}
// //we can give argument of any contructor like
// cout<<"Enter any two number"<<endl;
// int x,y;
//  point k(x,y);