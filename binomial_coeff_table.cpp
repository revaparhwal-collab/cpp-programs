#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter value of n: ";
    cin >> n;

    // Header
    cout << "Mx ";
    for (int i = 0; i <= n; i++)
    {
        cout << i << " ";
    }
    cout << endl;

    // Line
    for (int i = 0; i < 50; i++)
        cout << "-";
    cout << endl;

    // Binomial coefficient table
    for (int i = 0; i <= n; i++)
    {
        int c = 1;
        cout << i << " ";

        for (int j = 0; j <= i; j++)
        {
            cout << c << " ";
            c = c * (i - j) / (j + 1);
        }

        cout << endl;
    }

    // Bottom line
    for (int i = 0; i < 50; i++)
        cout << "-";
    cout << endl;

    return 0;
}