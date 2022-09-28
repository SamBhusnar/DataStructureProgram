#include <iostream>

using namespace std;
class sam
{
    int s;
    int z;

void getdata(int k)
{
    cout << "The value of  s you entered is :" << s << endl;
    z=k;
    cout << "The value of  z you entered is :" << z<< endl;
}
public:
    
    void setdata(int,int);
};
void sam::setdata(int p,int kj=8)
{
s=p;
getdata(kj);
}
int main()
{
    sam l;
    l.setdata(4);
    

    return 0;
}