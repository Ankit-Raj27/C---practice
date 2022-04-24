#include <iostream>
using namespace std;

class Employee
{
    int id;
    int salary;
    public:
        void setID(void)
        {
            salary = 122;
            cout<<"Enter ID of the employee : ";
            cin>>id;
        }

        void getID(void)
        {
            cout<<"The id of this employee is : "<<id<<endl;
        }
};
int main()
{
    // Employee harry,rohan,lovish,shruti;

    // harry.setID();
    // harry.getID();

    Employee FB[4];
    for (int i = 0; i < 4; i++)
    {
        FB[i].setID();
        FB[i].getID();
    }
    

    return 0;
}