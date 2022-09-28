#include<iostream>
#include<string>
#include<fstream>
using namespace std;
int main(){
    // string s="my name is samadhan bhusnar";
    // ofstream out("samadhanbhusnar.txt");
    // out<<s;
    string sa;
    ifstream in("samadhanbhusnar.txt");
    // in>>sa;//it give one line
    // to give whole line 
    getline(in,sa);
    cout<<sa;
 
return 0;
}