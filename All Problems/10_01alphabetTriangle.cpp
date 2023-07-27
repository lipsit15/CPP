#include <iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the no of rows = ";
    cin >> row;
    for (int i = 1; i <= row;i++){
        for (int j = 1; j <= i;j++){
            cout << ((char)(i + 64)); // 96 for small 'a',64 for A
        }
        cout << endl;
    }
        return 0;
}