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
friend chor;
    void display()
    {
        cout << "Thes is information about employee id number " << id << endl;
        cout << "The value of id is: " << id << endl;
        cout << "The value of salary is: " << salary << endl;
        cout << "The value of weight is: " << weight << endl;
        cout << "Thes is information end about employee id number " << id << endl;
    }
    void num()
    {
        cout << "4" << endl;
    }
};
class chor
{
    friend facebook;
public:
    void choragetdata()
    {
        cout << "you got getdata" << endl;
        
    };
    int chorasetdata()
    {
        return (4);
    }
};
int main()
{
     facebook first;
    //  first.setData();
    //  first.display();
    
    // chora.num();
    first.num();
    // first.choragetdata();

    
    
    return 0;
}