#include <iostream>
#include <string>
#include <fstream>

using namespace std;
int main()
{
    string s = "samadhan ramchandra bhusnar";
    ofstream out("si.txt");

    out << s;
    out.close();
    // above line for write in file
    // following line for read in file
    string st;
    ifstream in("si.txt");
    // in >> st; // it give one word without space
    getline(in, st);//it give whole line with space
    
    cout << "my name is :" + st;
    in.close();

    return 0;
}