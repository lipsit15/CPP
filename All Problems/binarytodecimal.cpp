#include <iostream>
using namespace std;

int main(){
    int binNum, rem, decNum = 0, base = 1;
    cout << "binNum = ";
    cin >> binNum;
    while(binNum>0){
        rem = binNum % 10;
        decNum = decNum + rem * base;
        binNum /= 10;
        base *= 2;
    }
    cout << "decNum = " << decNum;
    return 0;
}