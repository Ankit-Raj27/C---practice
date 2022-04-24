#include <iostream>

using namespace std;

int glo = 6;
void sum()
{
    int a;
    cout<<glo;
}

int main()
{
    int glo=9;
    glo = 78;
    int a = 5 , b = 6;
    float pi=3.1415;
    char c='u';
    sum();
    cout << glo; 
    bool is_true = false;
    // cout<<"Here the value of a is "<<a <<". \nThe value of b is " <<b ;
    // cout<<"\nValue of pie is " <<pi;
    // cout<<"\nValue of c is " <<c;
    cout<<is_true<<glo;


    return 0;
}