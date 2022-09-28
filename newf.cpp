#include <iostream>
using namespace std;
class employee
{
    int id;
    int salary[100];
    string s;

public:
    void setdata(void);
    void display(void)
    {
        cout << "You entered id is " << id << endl;
        cout << "You entered salary is " << salary << endl;
        cout << "You entered name is " << s << endl;
    }
};
void employee::setdata()
{ // because it is a member function it can acess private data of it class
    cout << "Eneter your id " << endl;
    cin >> id;
    cout << "Enter your salary " << endl;
    cin >> salary[100];
    cout << "Enter your name " << endl;
    for (int i = 0; i < 200; i++)
    {
        cin >> s;
        if (s.at(i) == '$')
        {
            cout << "Your name is complete" << endl;
            break;
        }
    }

    display();
}
int main()
{
    employee sam;
    sam.setdata();
    return 0;
}