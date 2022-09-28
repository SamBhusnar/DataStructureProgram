#include <iostream>
using namespace std;
class a
{
    int xd;

public:
    void greet()
    {
        cout << "Hello my people by first greet a" << endl;
    }
};
class b
{
    int x;

public:
    void greet()
    {
        cout << "Hello my people by second greet b" << endl;
    }
};
class c : public a, public b
{
    int xl;

public:
    void greet()
    {
        
        a::greet();//first thee run after these run class b is run
        //  above and below line is syntax of ambiguity resolve
        // class_name :: funtion_name();
        //above systax for fucntion what about if atribute is 
        //ambiguis
        //what syntax in thse case
        //  
        // b::greet();
        // cout<<"Hello my beautiful people by class c these is derived class from class a and class b "
        // <<endl;
        // cout<<"These is example of ambiguity in derived class by multiple inheritance\n"<<endl;


        // cout << "Hello my people by third greet c" << endl;
    }
};

int main()
{
    // a l;
    // l.greet();
    // b k;
    // k.greet();
    c m;
    m.greet();

    return 0;
}
//what about any atribute ambiguity come how you solve them 
// what is syntax to solving that type of ambiguity 