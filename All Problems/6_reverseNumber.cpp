#include <iostream>
using namespace std;

int main(){
    int n, reverse=0, rem;
    cout << "Enter the number: " << endl;
    cin >> n;
    while(n!=0){
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }
    cout << "Reverse is: " << reverse << endl;
    return 0;
}

