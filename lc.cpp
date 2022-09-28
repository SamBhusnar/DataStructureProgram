#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    ShopItem(void)
    {
        id = 0;
        price = 0;
    }
    void setData(int, float);
    void getData(void);
};
void ShopItem::setData(int a, float b)
{
    id = a;
    price = b;
}
void ShopItem::getData(void)
{
    cout << "Id of your item is :" << id << endl;
    cout << "Price of your item is :" << price << endl;
}

int main()
{
    ShopItem *ptr = new ShopItem[4];
    ShopItem *p = ptr; // it get value of  inside in ptr that is adress
                       // of first array block allocated in heap
    for (int i = 0; i < 4; i++)
    {
        int p;
        float q;
        cout << "Enter id and price of your item no :" << (i + 1) << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < 4; i++)
    {
        p->getData();
        p++;
    }

    return 0;
}