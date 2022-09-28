#include <iostream>
#include <list>
using namespace std;
int main()
{
    list<int> member1;
    member1.push_back(70);
    member1.push_back(10);
    member1.push_back(20);
    member1.push_back(50);
    member1.push_back(30);
    member1.push_back(60);
    member1.push_back(40);
    list<int>::iterator it;
    it = member1.begin();

    for (int i = 0; i < member1.size(); i++)
    {
        cout << *it << " ";
        it++;
    }

    cout << "\nSize of member is :" << member1.size() << endl;
    member1.sort();

    for (it = member1.begin(); it != member1.end(); it++)
    {
        cout << *it << " ";
        it++;
    }
    cout << "\nSize of member is :" << member1.size();
    return 0;
}