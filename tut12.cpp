#include<iostream>
using namespace std;

int main ()
{
    //Ponter is datatype holding address of other datatypes

    int a=3;
    int *b = &a;

    //ADRESS of OPERATOR----&
    cout<<b<<endl;
    cout<<&a<<endl;

    //VALUE at OPERATOR----*-----(Dereference Operator)
    cout<<*b<<endl<<endl;

    //POINTER to POINTER
    int **c = &b;
    cout<<&b<<endl;
    cout<<c<<endl;
    cout<<*c<<endl;
    cout<<**c<<endl;
    return 0;
}