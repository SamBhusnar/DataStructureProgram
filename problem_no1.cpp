#include<iostream>
using namespace std;
  
class Test
{
private:
  int x;
public:
  Test(int x = 0) { this->x = x; }
  void change(Test *t) { this->x=t; }
  void print() { cout << "x = " << x << endl; }
};
  
int main()
{
  Test obj(5);
  Test *ptr = new Test (10);//in ptr have adress of heap memory location 
  // using new operator created
  obj.change(ptr);//this point to obj because obj involked change
  obj.print();
  return 0;
}
//this is pointer which points to obj now 
//chage funtion acept a pointer object 