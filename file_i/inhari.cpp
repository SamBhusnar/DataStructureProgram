#include <iostream>
using namespace std;
class sam
{
public:
    int s;
    int y;
    int z;
    sam &setData(int x, int y, int z)
    {
        s = x;
        this->y = y;
        this->z = z;
        return *this;
    }
    void getData(void);
};
void sam::getData()
{
    cout << "s:" << s << endl;
    cout << "y:" << y << endl;
    cout << "z:" << z << endl;
}
int main()
{
    sam obj;
    int d, da, l;
    cout << "Enter any number that want print";
    cin >> d >> da >> l;
    obj.setData(d, da, l).getData();

    return 0;
}