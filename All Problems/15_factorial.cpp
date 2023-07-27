#include <iostream>
using namespace std;

int main(){
    int n, fact = 1;
    cout << "n = ";
    cin >> n;
    if(n<0){
        cout << "error" << endl;
    }
    else{
        for (int i = 1; i <= n;i++){
            fact = fact * i;
        }
    }
    cout << "fact = " << fact;
    return 0;
}