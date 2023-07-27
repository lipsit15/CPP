#include <iostream>
using namespace std;
void numtochar(int x)
{
    int r = 0, a = 0;
    while (x > 0)
    {
        /*
        eg : 1234
        
        a=1234%10=4
        r=0*10+4=4
        x=1234/10=123... this continues till x>0.
        */
        a = x % 10;
        r = r * 10 + a;
        x = x / 10;
    }
    while (r > 0)
    {
        a = r % 10;

        switch (a)
        {
        case 1:
            cout << "ONE";
            break;
        case 2:
            cout << "TWO";
            break;
        case 3:
            cout << "THREE";
            break;
        case 4:
            cout << "FOUR";
            break;
        case 5:
            cout << "FIVE";
            break;
        case 6:
            cout << "SIX";
            break;
        case 7:
            cout << "SEVEN";
            break;
        case 8:
            cout << "EIGHT";
            break;
        case 9:
            cout << "NINE";
            break;
        case 0:
            cout << "ZERO";
            break;
        default:
            cout << "INVALID NUMBER";
            break;
        }
        r = r / 10;
    }
}

int main()
{
    int x;
    cout << "Enter the number greater than zero = ";
    cin >> x;
    numtochar(x);

    return 0;
}