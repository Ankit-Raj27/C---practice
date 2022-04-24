#include<iostream>
using namespace std;

int sum( int a , int b)
{
    int c = a + b;
    return c;
}
// This will not swap a and b
void swap(int a, int b)   /* temp a  b
                             4    4  5
                             4    5  5
                             4    5  4 */
{
    int temp= a;
    a = b;
    b=temp;
}

void swapPointer(int* a, int* b)

{
    int temp= *a;
    *a = *b;
    *b=temp;
}
int main()
{   
    int a = 4, b = 5;
    //cout<<"The sum of 4 and 5 is "<<sum(4,5);
    cout<<"The value of a is "<< a <<" and value of b "<<b<<endl;
    // swap(a,b);  //This will not swap
    swapPointer(&a, &b);
    cout<<"The value of a is "<< a <<" and value of b "<<b<<endl;
    return 0;
}