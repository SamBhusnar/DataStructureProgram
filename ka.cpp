#include <iostream>
using namespace std;
int main()
{
    int num;
    cout << "Enter any number two print table of that number" << endl;
    cin >> num;
    for (int i = (2 * num); i <= (num * 10); i += num)
    {
        cout << i << endl;
    }

    return 0;
}