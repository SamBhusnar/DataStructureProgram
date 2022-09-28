#include <iostream>
#include <vector>
using namespace std;
template <class t>
void display(vector<t> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";

        // cout << a.at(i) << " ";
    }
}

int main()
{
    // int size;
    // int same;
    // vector<int> vec1;
    // cout << "Enter size of vector you want creat" << endl;
    // cin >> size;
    // for (int i = 0; i < size; i++)
    // {

    //     cout << "Enter first element of vector at adress " << i << endl;
    //     cin >> same;
    //     vec1.push_back(same);
    // }
    // vector<int>::iterator iter = vec1.begin();
    vector<int> v(44, 5); // 44 element  in 5s
    vector<int> ::iterator it=v.begin();
    v.insert(it,4);
    display(v);

    // display<int>(vec1);
    // cout << endl;
    // display<int>(vec1);
    // return 0;
}
