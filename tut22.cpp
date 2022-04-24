// OOPs - Classes and Objects

// C++ was inititally called C with classes by Stroustrup
// class ---> extention of structures (in c)
// Structures had limitations
//                    - members are public
//                    - No methods

// classes --> Structure + more
// classes can have methods and properties
// classes can make few members as private and few as public
//  Structures in C++ are typedef
// you can declare objects along with the class declaration
/*class Employee {
        Class declaration
    } Harry, Rohan, Lavish; */
// Harry.salary = 8 makes no sense if salary is private

// NESTING OF MEMBER FUNCTION
#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void chk_bin(void);
    void onescompliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "Enter a binary number" << endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}

void binary ::onescompliment(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary ::display(void)
{
    cout << "Displaying your binary number" << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{
    binary b;
    b.read();
    b.chk_bin();
    b.display();
    b.onescompliment();
    b.display();
    return 0;
}