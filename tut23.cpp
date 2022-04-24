#include <iostream>
using namespace std;

class shop
{
    int ItemId[100];
    int ItemPrice[100];
    int counter;

public:
    void initcounter(void) { counter = 0; }
    void setPrice(void);
    void DisplayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter ID of your item no " << counter + 1 << endl;
    cin >> ItemId[counter];
    cout << "Enter price of your item : " << endl;
    cin >> ItemPrice[counter];
    counter++;
}

void shop ::DisplayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "The Price of item with Id : " << ItemId[i] << " is " << ItemPrice[i] << endl;
    }
}
int main()
{
    shop dukan;
    dukan.initcounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.DisplayPrice();
    return 0;
}