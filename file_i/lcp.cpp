#include <iostream>
#include <list>
using namespace std;
void display(list<int> &lst)
{
    list<int>::iterator it;

    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
}
int main()
{
    list<int> obj1;

    list<int>::iterator it;
    it = obj1.begin();
    for (int i = 0; i < 4; i++)
    {
        int enter;
        cout << "Enter any number" << endl;
        cin >> enter;
        obj1.push_back(enter);
    }
    display(obj1);
    return 0;
}