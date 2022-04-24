#include<iostream>
using namespace std;

int main()
{
    //Array Example
    int marks[4] = {23,24,56,87};
    int mathsmarks[4];
    mathsmarks[0] = 2278;
    mathsmarks[1] = 1234;
    mathsmarks[2] = 232;
    mathsmarks[3] = 228;

    cout<<"These are mathsmarks"<<endl;
    cout<<mathsmarks[0]<<endl;
    cout<<mathsmarks[1]<<endl;
    cout<<mathsmarks[2]<<endl;
    cout<<mathsmarks[3]<<endl;

    cout<<"These are marks"<<endl;
    // cout<<marks[0]<<endl;
    // cout<<marks[1]<<endl;

    // You can change value of an array
    // marks[2] = 657;
    // cout<<marks[2]<<endl;
    // cout<<marks[3]<<endl;

    // for (int i = 0; i < 4; i++)
    // {
    //     /* code */
    //     cout<<"The vakue of marks "<<i<<" is "<<marks[i]<<endl;
    // }

    //QUIZ : Do this by using "while" and "do while" loops.
    int i = 0;
    // while(i<4)
    // {
    //     cout<<"The value of marks "<<i<<" is "<<marks[i]<<endl;
    //     i = i+1;
    // }
    
    //For "Do while" loop

    do
    {
        cout<<"The value of marks is "<<i<<" is "<<marks[i]<<endl;
        i=i+1;
    } while (i<4);
    
    int *p = marks;
    cout<<*(p++);
    cout<<*(++p);

    return 0;
    
}