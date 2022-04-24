#include <iostream>
#include <iomanip>

using namespace std;

int main()
{   //int a = 45;
//     cout<<"The value of a was: "<<a<<endl;
//     a = 50;
//     cout<<"The value of a is: "<<a<<endl;

    //*********CONSTANTS*********

    // const float a = 3.66;
    // cout<<"The value of a was: "<<a<<endl;
    // a = 50; // You will get an error as a is constant
    // cout<<"The value of a is: "<<a<<endl;

    //*********MANIPULATOR************
    
    // int a = 3, b=78,c=233;
    // cout<<"a: "<<setw(4)<<a<<endl;
    // cout<<"b: "<<setw(4)<<b<<endl;
    // cout<<"c: "<<setw(4)<<c<<endl;
    
    // cout<<"a: "<<a<<endl;
    // cout<<"b: "<<b<<endl;
    // cout<<"c: "<<c<<endl;

    //******OPERATOR PRECEDENCE*******

    int a = 3, b = 4;
    int c = ((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}