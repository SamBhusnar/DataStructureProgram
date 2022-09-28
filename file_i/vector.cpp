#include <iostream>
#include <vector>
using namespace std;
template <class t = int>
void display(vector<t> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1;
    int sizea;
    cout << "Enter the size of your vector ";
    cin >> sizea;
    int element;
    for (int i = 0; i < sizea; i++)
    {
        cout << "Enter an element to add this vector : ";
        cin >> element;
        vec1.push_back(element);
    }

    for (int i = 0; i < 4; i++)
    {
    }

    display(vec1);
    return 0;
}