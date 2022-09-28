#include <iostream>
#include <vector>
using namespace std;
template <class t = float>
void display(vector<t> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
        //    cout<<a.at(i)<<" ";
    }
    cout << "\nThe size of vector is :" << a.size() << endl;
}
int main()
{
    // vector<int> vec1;
    // int size;
    // int num;
    // cout << "Enter size of vector :" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {
    //     cout << "Enter any number to store an a vector\n";
    //     cin >> num;
    //     vec1.push_back(num);
    // }
    // cout << "The value of size vector is :" << vec1.size() << endl;
    // vec1.pop_back();
    // // how to element insert in vector
    // // syntax for that vector<int>::iterator it;

    // // it=vec1.insert( it,5);
    // vector<int>::iterator it;
    // it = vec1.begin();
    // vec1.insert(it + 3, 5, 4);
    // display<int>(vec1);
    vector<int> vec2;//zero lenght vector
    vector<int> vec1(4);//4-lenght vector thir block are empty
    display(vec1);

    return 0;
}
