//Static variable is also called calss variable and it is shared by all objects in the class!

#include<iostream>
using namespace std;

class Employee
{
    int id;
    static int count;
    public:
        void setData(void)
        {
            cout<<"Enter the id : "<<endl;
            cin>>id;
            count++;
        }
        void getData(void)
        {
            cout<<"The id of the employee is "<< id<<" and this is employee number : "<<count<<endl;
        }

        static void getCount(void)
        {
            //cout<<id;          // Throws an error as id is not a static variable
            cout<<"The value of count is : "<<count<<endl;
        }
};

int Employee :: count;    // Default value is 0

int main()
{
    Employee harry,rohan,lovish;
    // harry.id = 1;
    // harry.count = 1;     // not possible as id and count are private

    harry.setData();
    harry.getData();
    Employee :: getCount();

    rohan.setData();
    rohan.getData();
    Employee :: getCount();

    lovish.setData();
    lovish.getData();
    Employee :: getCount();
    return 0;
}