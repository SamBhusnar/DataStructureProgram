#include<iostream>
using namespace std;
int main (){
cout<<"samadhan\n";
cout<<"Enter any number to find 0dd number from 1 to n number\n";
int inp;
cin>>inp;
for (int i = inp; i >= 1; i--)
{
    if (i%2!=0)
    {
        cout<<" "<<i<<"\n";
    }
    
}

    return 0 ;
}