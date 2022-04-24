#include <iostream>
using namespace std;

class Employee
{
private:
    int a, b, c;

public:
    int d, e;
    void setData(int a1, int b1, int c1); // DECLARATION
    void getData()
    {
        cout << "The value of a is" << a << endl;
        cout << "The value of b is" << b << endl;
        cout << "The value of c is" << c << endl;
        cout << "The value of d is" << d << endl;
        cout << "The value of e is" << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
};
int main()
{
    Employee Harry;
    Harry.setData(1, 2, 4);
    // Harry.a = 152 (this will give an error as a is private class)
    Harry.d = 32;
    Harry.e = 54;
    Harry.getData();
    return 0;
}