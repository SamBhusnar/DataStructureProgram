#include <iostream>
using namespace std;
class shop
{
private:
    int itemid[100];
    int itemprice[100]; // we can create array as private data
    static int counter; // default value is zero

public:
    void initcounter(void)
    {
        counter = 0;
    }
    void setprice(void);
    void displayprice(void);
    void count(void);
};
void shop::count(void)
{
    cout << endl
         << "The value of counter is "
         << counter;
}
void shop::setprice(void)
{

    cout << "Enter Id of your itme No " << counter + 1 << endl;
    cin >> itemid[counter];
    cout << "Enter price of your item" << endl;
    cin >> itemprice[counter];
    counter++;
}
void shop::displayprice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The price of item with id "
             << itemid[i]
             << " is " << itemprice[i] << endl;
    }
}
int shop::counter;

int main()
{
    shop dukaan, c;        // dukaan is object of class shop
    dukaan.initcounter();  // run initcounter because we no need to garbage value we need a specifice value
    dukaan.setprice();     // done
    dukaan.setprice();     // done
    dukaan.setprice();     //
    dukaan.displayprice(); //
    dukaan.count();        //
    c.count();             //
    return 0;              //
} //
  //