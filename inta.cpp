#include <iostream>
using namespace std;
class employee
{
    int id; // it is private data of class employee
    void setdata(int i);

public:
    float salary;
    employee(void)
    {
        salary = 43.3;
        cout << "before contructor run :" << id << endl;
        id = 0;
        cout << "after contructor run:" << id << endl;
    }
    void getdata(int i); // vairable scope are limited to the function
};
void employee::setdata(int a)
{
    id = a;
}
void employee::getdata(int k)
{
    cout << "getdata is member function called after contructor is run  setdata is not set now :" << id << endl;
    setdata(k); // officially set value of setdata member priavate member
    cout << "get data function end here after setdata set value of id is :" << id << endl;
}
class programmer : employee
{
    int mind;
    // all  public memberr of employee class is member of programmer class but visibility mode is private because of these resion all public member of
    // employee class is private member of programmer class
    // those all consept apply here those apply on private member of any class
    // thank you
public:
    void setdata_in_programmmer_class(void)
    {
        mind = 0;
        getdata(4444);
        cout << "The value of mind is:" << mind << endl;
        cout << "The value of mind is:" << salary << endl;
    }
};
int main()
{
    // employee k;   // object of employee class for thse contructor run
    // k.getdata(4); // contructor run for object k just object is  k
    programmer l; // object is created of programer class
    l.setdata_in_programmmer_class();
    // l.getdata(4);
    // <<endl;
    // l.salary;

    return 0;
}
// contructor is public member of class
//  construtor also inherited
// contructor run for only thir own class object
// contructor run when object is created of thire own class
// not any single link of another class object created
// if another class object acess resorcess of that contrucotor class in these case constructor also not run no link with another classesj
//class data use by another class object when that time contructor is called