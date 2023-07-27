// ALl digit are armstrong number
#include <iostream>
using namespace std;

int main(){
    int num, copynum, remainder, sum = 0;
    cin >> num;
    copynum = num;
    while(copynum!=0){
        remainder = copynum % 10;
        sum += remainder * remainder * remainder;
        copynum = copynum / 10;


    }
    if(sum==num){
        cout << "Armstrong Number:" << endl;
    }
    else{
        cout << "Not Armstrong Number:" << endl;
    }

    return 0;
}