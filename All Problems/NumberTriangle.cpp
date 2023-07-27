#include <iostream>
using namespace std;

int main()
{
    int row;
    cout << "Enter the row = ";
    cin >> row;
    for (int i = 1; i <= row; i++)
    {
        for (int j = 1; j <= row - i; j++)
        {
            cout << " ";
        }

        for (int k = 1; k <= i; k++)
        {
            cout << ((char)(k + 64)); // for number put k in place of char k+64
        }
        for (int l = i - 1; l >= 1; l--)
        {
            cout << ((char)(l + 64)); // for number put l in place of char l+64
        }
        cout << endl;
    }

    return 0;
}