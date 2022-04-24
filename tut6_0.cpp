#include<iostream>

using namespace std;

int main()
{
    int a=4, b=5;
    cout<<"Operators in C++: \n";
    cout<<"TYPES:\n";

    //Arithematic Operator
    cout<<"a+b : "<<a+b<<"\n";
    cout<<"a-b : "<<a-b<<"\n";
    cout<<"a*b : "<<a*b<<"\n";
    cout<<"a/b : "<<a/b<<"\n";
    cout<<"a%b : "<<a%b<<"\n";
    cout<<"a++b : "<<a++<<"\n";
    cout<<"a--b : "<<a--<<"\n";
    cout<<"++a : "<<++a<<"\n";
    cout<<"--a : "<<--a<<"\n";
    cout<<endl;
    

    //Assignment Operator
    // int a=1, b=2;
    //char d = 'd';

    //Comparison Operator
    cout<<"These are the examples of Comparison Operator:"<<endl;
    cout<<"The value of a==b is "<< (a==b)<< endl;
    cout<<"The value of a>b is "<< (a>b) << endl;
    cout<<"The value of a<b is "<< (a<b) << endl;
    cout<<"The value of a>=b is "<< (a>=b) << endl;
    cout<<"The value of a<=b is "<< (a<=b) << endl;
    cout<<"The value of a!=b is "<< (a==b) << endl;

    //Logical Operator
    cout<<"Following are the logical operaor:"<<endl;
    cout<<"The value of logical OR operator (a==b) && (a<b) is "<< ((a==b) && (a<b)) << endl;
    cout<<"The value of logical OR operator (a==b) && (a<b) is "<< ((a==b) || (a<b)) << endl;
    cout<<"The value of logical NOT operator (!a==b)) is "<< (!(a==b)) << endl;

    return 0;

}
