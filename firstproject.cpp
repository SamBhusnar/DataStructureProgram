#include <iostream>
using namespace std;

int main()
{

    int enternum;
start:
    cout << "THESE CALCULATOR FOR SMALL NUMBER RANGE SINGAL DIGIT OR TWO DIGIT" << endl;
    cout << "press anyone from [1,2,3,4] for addition subtraction multiplication division respectively " << endl;
    cin >> enternum;
    if (enternum == 1)
    {
        float num1, num2;
        cout << "Enter two number for addition " << endl;
        cin >> num1 >> num2;
        cout << "Addition of " << num1 << " + " << num2 << " is :" << num1 + num2 << endl;
    }
    else if (enternum == 2)
    {
        float num1, num2;
        cout << "Enter two number for subtraction " << endl;
        cin >> num1 >> num2;
        cout << "subtraction of " << num1 << " - " << num2 << " is :" << num1 - num2 << endl;
    }

    else if (enternum == 3)
    {
        float num1, num2;
        cout << "Enter two number for multiplication " << endl;
        cin >> num1 >> num2;
        cout << "multiplication of " << num1 << " x " << num2 << " is :" << num1 * num2 << endl;
    }
    else if (enternum == 4)
    {
        float num1, num2;
        cout << "Enter two number for division " << endl;
        cin >> num1 >> num2;
        cout << "division of " << num1 << " / " << num2 << " is :" << num1 / num2 << endl;
    }
    else
    {
        cout << "You are not follow instruction you can try later: Thanks " << endl;
    }

end:
    return 0;
}