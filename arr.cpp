#include <iostream>
using namespace std;
class employee
{
private:
    int id;
    int salary;

public:
    void setid(void)
    {
        salary = 122;
        cout << "Enter the id of employee" << endl;
        cin >> id;
    }

    void getid(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{

    employee fb[6];//these is a object array
   
   for (int  i = 0; i < 6; i++)
   {
       fb[i].setid();
       fb[i].getid();

   }
   

    

    return 0;
}