// these type of inheritence is called multilevel inheritenc
#include <iostream>
using namespace std;
class student
{
protected:
    int roll_number;

public:
    void setrollnumber(void)
    {
        int x;
        cout << "Enter your roll number" << endl;
        cin >> x;
        roll_number = x;
    }
    void getrollnumber()
    {
        cout << "" << roll_number;
    }
};
class exam : public student
{
    float maths, physics;

public:
    float per;
    void getmark(void)
    {
        setmark();
        cout << "The marks of physics is :" << physics << endl;
        cout << "The marks of maths is :" << maths << endl;
        per = ((maths + physics) / 2);
        cout << "Your persentege is :" << per << "%";
    }
    void setmark(void)
    {
        setrollnumber();
        float a, b;
        cout << "Enter your marks maths and physics respectivily" << endl;
        cin >> a >> b;
        maths = a;
        physics = b;
    }
};
class results : protected exam
{
public:
    void resutl(void)
    {

        getmark();
        if (per >= 35)
        {
            cout << endl
                 << "Your pass" << endl;
        }
        else
        {
            cout << endl
                 << "Your fail" << endl;
        }
    }
};
int main()
{
    results rohan;
    rohan.resutl();

    return 0;
}