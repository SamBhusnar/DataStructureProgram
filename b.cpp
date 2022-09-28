#include <iostream>
using namespace std;
// these is an example of nestele function function inside function
static int varaible; // by default valur is zero
class sam
{ // following data is by default private data not need to declaired it is private data

    int x;
    int y;
    int z;

    void getdata() // now these function is private no own  access these
                       // function  acesept member funtion
    {
        varaible++;

        cout << "The value of x is:" << x << endl;
        cout << "The value of y is:" << y << endl;
        cout << "The value of z is:" << z << endl; // it is give garbage value ,previous present on that memory block
    }

public:
    void setdata(int d, int k, int l)
    {
        varaible++; // varaible++;//initial value is zero
        x = d;
        y = k;
        z = l;
        
        getdata(); // written like these is not allowed  [ "void getdata();" and "getdata(void);" and also "void getdata(void);"]
    }
} ;

int main()
{
    sam first_object, second_object;

    int x;
    int y;
    int a, b, c;
    int z;
    cout << "Enter three value of x,y,z" << endl;
    cin >> x >> y >> z;
    first_object.setdata(x, y, z); // for x data type is not requaired{ [setdata( int x);] like these}
    cout << "Second object called here now";
    cout << "Enter three value of a,b,c" << endl;
    cin >> a >> b >> c;
    second_object.setdata(a, b, c); // for x data type is not requaired{ [setdata( int x);] like these}
                                    //    first_object.getdata();
                                    //     second_object.getdata();
    cout << "how many time fucntion called: " << varaible << endl;
    return 0;
}
// classe does not have memory  and just object have thir own memory
// classes work like a template for everyown just object have memory
// when object are create then object  have thir own memory nut classe not
// every object have thir own memory classes work like a template for envery
// object
//
