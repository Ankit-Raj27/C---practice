#include<iostream>
using namespace std;

inline int product(int a , int b)
{   
    //Not recommended  to use below lines with inline funciton
    // static int c=0;
    // c = c+1;
    return a*b;
    
}

float moneyRecieved(int CurrentMoney , float factor=1.04)
{
    return CurrentMoney * factor;

}
int main()
{
    // int a,b;
    // cout<<"Enter the value of a and b : "<<endl;
    // cin>>a>>b;
    // cout<<"The product of a and b : "<<product(a,b)<<endl;
    int money = 100000;
    cout<<"If you have "<<money<<" Rs in your bank account, You'll recieve "<<moneyRecieved(money)<<" Rs after 1 year"<<endl;
    cout<<"For VIP: If you have "<<money<<" Rs in your bank account, You'll recieve "<<moneyRecieved(money,1.10)<<" Rs after 1 year";
    return 0;
}