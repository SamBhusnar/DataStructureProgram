#include <iostream>
using namespace std;
class dis
{
public:
    dis(void)
    {
        cout << "Thes is time when my constructor is called" << endl;
    }
    ~dis(void)
    {
        cout << "Thes is time when my distructor is called " << endl;
    }
};
int main()
{
    dis s; // when object are creat when that time contructor are called
    // and when object is out thir scope or object end thir scope when that time
    // distructor called automatically

    return 0;
}