#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Enter a:" << endl;
    cin >> a;
    cout << "Enter b:" << endl;
    cin >> b;
    // swap(a, b); using third variable

//without using third variable.
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "a= " << a << " "
         << "b= " << b << endl;

    return 0;
}
/*
swapping two numbers without using third variable
a=a+b;
b=a-b;
a=a-b
*/