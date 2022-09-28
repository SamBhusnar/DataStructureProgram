#include <iostream>
using namespace std;
class d
{
public:
    void say()
    {
        cout << "hello world\n";
    }
};
class c : public d
{
public:
    // void say()
    // {
    //     cout << "hello my beatiful people by sam\n ";
    // }
};
int main()
{
 d a;
 a.say();
 c s;
 s.say();

    return 0;
}