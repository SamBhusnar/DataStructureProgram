#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // string st = "samadhan ramchandra bhusnar  ";
    // // string is like array to store string
    // ofstream out("samadhanbhusnar.txt"); // file name to write operation
    // out << st;                           // what string write on that file those string write here
    // openign file using constructor and reading is it
ifstream in("samadhanbhusnar.txt");//to read operation in file
string st2;// where to store reading string those adress
// in>>st2;// read file in st2 in >>st2; just get onw word of whole line
// if we want get whole line then a command is here
getline(in,st2);// ( in _ to get read file , where to store that location)
cout<<st2; //cout<< //to storing string
    return 0;
}