/*
to print 
A
AB
ABC
ABCD
ABCDE
*/
#include <iostream>
using namespace std;

int main(){
    int row;
    cout << "Enter the row = ";
    cin >> row;
    for (int i = 1; i <= row;i++){
        for (int j = 1; j <= i;j++){
            cout << ((char)(j + 64)); //converts the integer value of j into its corresponding ASCII character 
        }
        cout << endl;
    }

        return 0;
}