// sum of digits - eg :i/p = 123, o/p = 1+2+3=6
#include <iostream>
using namespace std;

int main(){
    int n, sum=0, m;
    cout << "Enter a number: " << endl;
    cin >> n;
    while(n>0){
        m = n % 10;
        sum = sum + m;
        n = n / 10;
    }
    cout << "sum is :" << sum << endl;
    return 0;
}