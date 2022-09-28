// dynamic initialization using contructor
#include <iostream>
using namespace std;
class name
{
    int time;
    float rate;
    int Rate;
    int principle;
    float returnval;

public:
    name(void)
    {
        time = 0;
        rate = 0;
        Rate = 0;
        principle = 0;
        returnval = 0;
    }
    name(int t, int p, float r)
    {
        time = t;
        principle = p;
        rate = r;
        returnval = principle;
        for (int i = 0; i < t; i++)
        {
            returnval = returnval * (1 + rate);
        }
        cout << "The return amout after " << time << " is " << returnval << endl;
    }
    name(int t, int p, int R)
    {
        time = t;
        principle = p;
        Rate = R;
        returnval = principle;
        for (int i = 0; i < t; i++)
        {
            returnval = returnval * (1 + (float(Rate) / 100));
        }
        cout << "The return amout after " << time << " is " << returnval << endl;
    }
};
int main()
{
    int t;
    int p;
    float r;
    int R;
    cout << "Enter your t p and rate" << endl;
    cin >> t >> p >> r;
    name set(t, p, r);
    // *****************************************************************//
    cout << "Enter your t p and Rate" << endl;
    cin >> t >> p >> R;
    name seta(t, p, R);
    return 0;
}
