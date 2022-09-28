// project of employee management project
// name of previous project is two digit calculator for addtion subtraction multipicaltion and division
// project 2
// about project number 2 ,these is project set emplooy id salary and weight and show them

#include <iostream>
using namespace std;
class facebook
{
    int id;
    float salary, weight;

public:
    void setData()
    {
        cout << "Enter you id " << endl;
        cin >> id;
        cout << "Enter you salary " << endl;
        cin >> salary;

        cout << "Enter you weight " << endl;
        cin >> weight;
    }

    void display()
    {
        cout << "Thes is information about employee id number " << id << endl;
        cout << "The value of id is: " << id << endl;
        cout << "The value of salary is: " << salary << endl;
        cout << "The value of weight is: " << weight << endl;
        cout << "Thes is information end about employee id number " << id << endl;
    }
};

int main()
{

    cout << "We give chance to employee to choose thir id "
         << "but one time selected id is until thir id until those person are employee of facbook company" << endl;
    facebook array[3];
    for (int i = 0; i < 3; i++)
    {
        int integer;
        cout << "Set your id salary  and weight" << endl;
        cout << "To check everything is right press 1" << endl;
        cin >> integer;
        if (integer != 1)
        {
            goto end;
        }
        array[i].setData();
    }
    for (int i = 0; i < 3; i++)
    {
        array[i].display();
    }

end:
    return 0;
}