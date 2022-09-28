#include <iostream>
using namespace std;
class dynamicInitialiinitializationusingcontructor
{
    int x, y;

public:
    void show(void)
    {
        cout << "x,y:(" << x << "," << y << ")" << endl;
    }
    dynamicInitialiinitializationusingcontructor(void)
    {

        cout << "default contructor are involked" << endl;
        x = 0;
        y = 0;
    }
    dynamicInitialiinitializationusingcontructor(int a);
    dynamicInitialiinitializationusingcontructor(float a);
    dynamicInitialiinitializationusingcontructor(int a, int b);
    dynamicInitialiinitializationusingcontructor(float a, float b);
    dynamicInitialiinitializationusingcontructor(int a, float b);
    dynamicInitialiinitializationusingcontructor(float a, int b);
};
dynamicInitialiinitializationusingcontructor::dynamicInitialiinitializationusingcontructor(int a)
{
    show();
    cout << " int a involkekd" << endl;
    x = a;
}
dynamicInitialiinitializationusingcontructor::dynamicInitialiinitializationusingcontructor(float a)
{
    show();
    cout << " float a involkekd" << endl;

    x = a;
}
dynamicInitialiinitializationusingcontructor::dynamicInitialiinitializationusingcontructor(int a, int b)
{
    show();
    cout << "int a and int b are involked" << endl;
    x = a;
    y = b;
}
dynamicInitialiinitializationusingcontructor::dynamicInitialiinitializationusingcontructor(float a, float b)
{
    show();
    cout << "float a and float b are involked" << endl;

    x = a;
    y = b;
}
dynamicInitialiinitializationusingcontructor::dynamicInitialiinitializationusingcontructor(int a, float b)
{
    show();
    cout << "int a and float b are involked" << endl;

    x = a;
    y = b;
}
dynamicInitialiinitializationusingcontructor::dynamicInitialiinitializationusingcontructor(float a, int b)
{

    show();
    cout << "float a and int b are involked" << endl;

    x = a;
    y = b;
}
int main()
{
    dynamicInitialiinitializationusingcontructor obj;
    obj.show();

    dynamicInitialiinitializationusingcontructor obj1(4);
    dynamicInitialiinitializationusingcontructor obj2(4.4f);
    dynamicInitialiinitializationusingcontructor obj3(4.4f, 43);
    dynamicInitialiinitializationusingcontructor obj4(4, 4.3f);
    dynamicInitialiinitializationusingcontructor obj5(43, 43);
    dynamicInitialiinitializationusingcontructor obj6(4.3f, 4.3f);

    return 0;
}