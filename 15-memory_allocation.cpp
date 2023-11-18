#include <iostream>
using namespace std;

class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void zero_counter(void) { counter = 0; }
    void setPrice(void);
    void displayPrice(void);
};

void shop ::setPrice(void)
{
    cout << "Enter Item ID of "<<counter + 1<<" : ";
    cin >> itemId[counter];
    cout << "Enter Item Price of "<<counter + 1<<" : ";
    cin >> itemPrice[counter];
    counter++;
}

void shop ::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item ID : " << itemId[i] << " , Price : " << itemPrice[i]<<endl;
    }
}

int main()
{
    shop za;
    za.zero_counter();
    za.setPrice();
    za.setPrice();
    za.setPrice();
    za.displayPrice();
    return 0;
}