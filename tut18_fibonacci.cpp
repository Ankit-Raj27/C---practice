#include<iostream>
using namespace std;

int fibo(int n)
{
    if (n<2)
    {
        return 1;
    }
    return fibo(n-2) + fibo(n-1);
}

        /* STEP BY STEP 
        fibo(5) 
        fibo(4) + fibo(3)
        fibo(4) + fibo(3) + fibo(2) + fibo(3) */
int main()
{
    int a;
    cout<<"Enter a number"<<endl;
    cin>>a;
    cout<<"The term in fibonacci sequence at position "<<a<<" is "<<fibo(a);
    return 0;
}