#include <iostream>
using namespace std;

int main(){
    int r;
    cout << "Enter the row = ";
    cin >> r;
    for (int i = 1; i <= r;i++){
        for (int j = i; j <= r;j++){
            cout << ((char)(i + 64));
        }
        cout << endl;
    }
        return 0;
}