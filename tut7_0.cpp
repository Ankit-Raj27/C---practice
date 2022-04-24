#include <iostream>

using namespace std;

int c=45;

int main()
{   
    //**********BUILD IN DATA TYPES***********

    // int a,b,c;
    // cout<<"Enter a : "<<endl;
    // cin>>a;
    // cout<<"Enter b : "<<endl;
    // cin>>b;
    // c=a+b;
    // cout<<"Sum: "<<c <<endl;
    // cout<<"Global c: "<<::c;



    //*********FLOAT,DOUBLE & LONG DOUBLE LITERALS**********

    // float d= 34.4f;
    // long double e = 34.4l;
    // cout<<"The value of d: "<<d <<endl <<"The value of e: "<<e<<endl;

    // cout<<"The size of 34.4 is: "<<sizeof(34.4)<<endl;
    // cout<<"The size of 34.4f is: "<<sizeof(34.4f)<<endl;
    // cout<<"The size of 34.4F is: "<<sizeof(34.4F)<<endl;
    // cout<<"The size of 34.4l is: "<<sizeof(34.4l)<<endl;
    // cout<<"The size of 34.4L is: "<<sizeof(34.4L)<<endl;



    //**********REFERENCE VARIABLE************

    //Rohan---->Monty----> Rohu -----> Dangerous_Coder
    // float x = 455;
    // float & y = x;

    // cout<<x<<endl;
    // cout<<y<<endl;



    //************TYPECASTING VARIABLE*************

    int a = 45;
    float b = 45.56;
    cout<<"The value of a : "<<(float)a<<endl;
    cout<<"The value of a : "<<float(a)<<endl;

    cout<<"The value of b : "<<(int)b<<endl; 
    cout<<"The value of b : "<<int(b)<<endl; 

    int c = int(b);
    cout<<"c: "<<c<<endl;
    
    cout<<"The expresion is "<<a+b<<endl;
    cout<<"The expression is "<<a+int(b)<<endl;
    cout<<"The expression is "<<a+(int)b<<endl;
    return 0;
}