#include <iostream>
using namespace std;

int main(){
    int A[10][10], B[10][10], MUL[10][10], r, c;
    cout << "Enter the no of row = " ;
    cin >> r;
    cout << "Enter the no of col = " ;
    cin >> c;
    cout << "Enter the first matrix element = \n";
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            cin >> A[i][j];
        }
    }
    cout << "Enter the second matrix element = \n";
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            cin >> B[i][j];
        }
    }

    cout << "The multiply is = \n";
    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            MUL[i][j] = 0;
            for (int k = 0; k < c;k++){
                MUL[i][j] += A[i][k] * B[k][j];
            }
        }
    }

    for (int i = 0; i < r;i++){
        for (int j = 0; j < c;j++){
            cout << MUL[i][j] << " ";
        }
        cout << endl;
    }

        return 0;
}