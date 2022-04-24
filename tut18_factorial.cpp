#include<iostream>
using namespace std;

int factorial(int n)
{
    if (n<=1)
    {
        return 1;
    }
    return n * factorial(n-1);
}

        /* STEP BY STEP calculation of factorial of 5
        factorial (5) = 5 * factorial(4); 
        factorial (5) = 5 * 4 * factorial(3); 
        factorial (5) = 5 * 4 * 3 * factorial(2); 
        factorial (5) = 5 * 4 * 3 * 2 * factorial(1); 
        factorial (5) = 5 * 4 * 3 * 2 * 1 * factorial(0); 
        factorial (5) = 120;*/ 
int main()
{
    //FACTORIAL of a NUMBER
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The factorial of "<< a<<" is : "<<factorial(a)<<endl;
    return 0;
}