#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    switch (age)
    {
    case 19:
        cout << "your age is ninteen" << endl;
        break;
    case 18:
        cout << "your age is eighteen" << endl;
        break;
    case 17:
        cout << "your age is seventeen" << endl;
        break;
    case 20:
        cout << "your age is twent" << endl;
        break;
    default:
        cout << "I don't know your age" << endl;
        break;
    }
    return 0;
}