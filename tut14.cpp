#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float Salary;
} ep ;

union money
{
    int rice;
    char car;
    float pounds;
};

int main()
{
    enum meal{ breakfast, lunch,dinner};
    meal m1 = lunch;
    cout<<m1;

    // cout<<breakfast;
    // cout<<lunch;
    // cout<<dinner;

    // ep harry;

    // union money m1;
    // m1.rice = 34;
    // m1.car = 'c';
    // m1.pounds = 200;
    // cout<<m1.pounds;
    


    // struct employee shubham;
    // struct employee rohan;
    // harry.eId = 1;
    // harry.favChar = 'C';
    // harry.Salary = 120000;
    // cout<<"The value is "<<harry.eId<<endl;
    // cout<<"The value is "<<harry.favChar<<endl;
    // cout<<"The value is "<<harry.Salary<<endl;
    
    return 0;
}