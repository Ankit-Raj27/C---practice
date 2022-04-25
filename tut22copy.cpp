#include <iostream>
#include <string>
using namespace std;

class binary
{
    string s;

public:
    void read(void);
    void check(void);
    void opposite(void);
    void display(void);
    void display_before(void);
};

void binary ::read(void)
{
    cout << "Enter the binary number : ";
    cin >> s;
}
void binary ::check()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "It is not a binary number, try again!" << endl;
            exit(0);
        }
    }
}

void binary ::opposite()
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

void binary :: display_before(void)
{
    cout<<"Bianry number before change : "<<s<<endl;
}

void binary :: display(void)
{   cout<<"Binary number after change : ";
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
}

int main()
{
    binary b;
    b.read();
    b.check();
    b.display_before();
    b.opposite();
    b.display();    
    return 0;
}