#include <iostream>
#include <string>
using namespace std;
class samadhan // make class that name is samadhan
{
    // by default data inside in c++ class is private  if we want make public then write public keyword

    string s; // lengthe of string not declaired here
              //  if i entered any number in string that number any other things are store in string  as a character''
    void chk_bin(void);

public: // following function is called is public function
    // thir type is void
    // function ==method
    // method
    // are
    void ones_compliment(void); // declaired
    void display(void);
    void read(void);
    // here not defination
};
// in class method declaire thire diffination outside of class thir syntax is method (data_type) (class_name)::method (name);

void samadhan::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
    chk_bin();
    // these method is called as nesting member fuction/mmethod
}
void samadhan::chk_bin(void) // s.lenght is length of string not inclued null termination character
{
    for (int i = 0; i < s.length(); i++)
    {                                         // s.at is accesss for string character on respective adress
        if (s.at(i) != '1' && s.at(i) != '0') //
        {
            cout << "Incorrect binary format" << endl;
            exit(0); // here all program stop
        }
    }
}

void samadhan::ones_compliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0'; // == == == == lhs =rhs
        }
    }
}
void samadhan::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}

int main()
{
    samadhan b;
    b.read();
    //    b.chk_bin();
    b.ones_compliment();
    b.display();

    return 0;
}