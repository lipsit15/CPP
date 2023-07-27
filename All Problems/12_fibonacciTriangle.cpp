#include <iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the row = ";
    cin >> row;
    int a=0, b=1, c = a + b;
    for (int i = 1; i <= row;i++){
        for (int j = 1; j <= i;j++){
            cout << c << " ";
            c = a + b;
            a = b;
            b = c;
        }
        cout << endl;
    }

        return 0;
}
// Time complexity 
/*
for (int i = 1; i <= r;i++)O(N)
for (int j = 1; j <= i;j++)O(N)
T.C = O(N^2)
*/