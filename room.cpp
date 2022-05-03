#include <iostream>
using namespace std;

int main()
{
    int T, X, Y;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        cin >> X;
        cin >> Y;
        if ((3 * X) > (2 * Y))
        {
            cout << 2 * Y;
        }
        else
        {
            cout << 3 * X;
        }
    }
}