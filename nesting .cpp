#include <iostream>
#include <string>
using namespace std;
class nesting
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void ones_complement(void);
    void display(void);
} kalu;
void nesting::read(void)
{
    cout << "Enter numbers as  string" << endl;
    cin >> s;
}
void nesting::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++) //{up to string length[ s.length]}
    {
        if (s.at(i) != '0' && s.at(i) != '1') // s.at(i) meaning inside s string at index i
        {
            cout << "Incorrect binnary format" << endl;
            exit(0); //
        }
    }
}
void nesting::ones_complement(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void nesting::display(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    cout << "We are learning about nesting member funtion" << endl;
   nesting  kalu;
   kalu.read();
    return 0;
}