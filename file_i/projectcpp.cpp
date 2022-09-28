#include <iostream>
using namespace std;
class ok
{
    int x;
    int y;

public:
    ok(int s, int r)
    {
        setData(s, r);
    }
    void setData(int a, int b)
    {
        cout << "first call" << endl;
        getData();
        x = a;
        y = b;
        cout << "second call" << endl;
        getData();
    }
    void getData(void);
};
void ok::getData(void)
{
    cout << "x:" << x << endl;
    cout << "y:" << y << endl;
}
int main()
{
    ok obj(4, 5);
    cout << "We are more doing on c++ language so don't worry about it thank you" << endl;
    return 0;
}