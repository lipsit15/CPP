#include<iostream>
using namespace std;
int main(){
    int decNum, rem, biNum = 0, base = 1;
    cout << "decNum = ";
    cin >> decNum;
    while(decNum>0){
        rem = decNum % 2;
        biNum = biNum + rem * base;
        decNum = decNum / 2;
        base = base * 10;
    }
    cout << "Binary is = " << biNum;
}