#include <iostream>
using namespace std;

int main()
{
    int T, N, X, P, M;
    cin >> T;
    for (int i = 0; i < T; i++)
    {

        cin >> N;

        cin >> X;

        cin >> P;
        // your code goes here
        M = 4 * X - N;
        if (M >= P)
        {
            cout << "Pass" << endl;
        }
        else
        {
            cout << "Fail" << endl;
        }
    }
    return 0;
}