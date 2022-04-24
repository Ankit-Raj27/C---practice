#include <iostream>

using namespace std;

int main()
{
    //******* IF ELSE IF ELSE LADDER*************
    //cout<<"This is tutorial9";
    int age;
    cout<<"Tell me your age: ";
    cin>>age;
    // if ((age<18 && age>0))
    // {
    //     cout<<"You can't come to my party";
    // }
    // else if(age==18)
    // {
    //     cout<<"You will get a kid pass"<<endl;
    // }
    // else if(age<1)
    // {
    //     cout<<"Born first"<<endl;
    // }
    // else
    // {
    //     cout<<"Welcome to the party"<<endl;
    // }

    //**************SWITCH CASE***********

    switch (age)
    {
    case 18:/* constant-expression */
        /* code */
        cout<<"You are 18"<<endl;
        break;
    case 22:/* constant-expression */
        /* code */
        cout<<"You are 22"<<endl;
        break;
    case 2:/* constant-expression */
        /* code */
        cout<<"You are 2";
        break;
    
    default:
    cout<<"No special cases."<<endl;
        break;
    } 
    return 0;
}