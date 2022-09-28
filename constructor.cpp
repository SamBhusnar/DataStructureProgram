#include <iostream>
using namespace std;
static int s;
class name
{
private:
    int sam;
    int sama;

public:
    name()
    {
        sam = 4;
        sama = 44;
        getdata();
    }
    void getdata()
    {
        cout << "Your sam value is sam :" << sam << endl;
        cout << "Your sam value is sama:" << sama << endl;
    }
} kalu; // we can create here class object
int main()
{
    name kalu; // also here create class object
    // if any fucntion are crete then automatice constructor are invoke
    return 0;
}
// /**************************************** properties of constructor****************************************/
// 1.every time conntructor are invoke when object are create that every time contructor are invoke 2.