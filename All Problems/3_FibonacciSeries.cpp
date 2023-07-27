#include <iostream>
using namespace std;
// int findFibonacci(int n){
//     int a = 1;
//     int b = 1;
//     int nextNumber;
//     if(n==1)
//         return 1;
//     if(n==2)
//         return 1;
//     for (int i = 3; i <=n;i++){
//         nextNumber = a + b;
//         a = b;
//         b = nextNumber;
//     }
//     return nextNumber;
// }   

// int main(){
//     int n;
//     cin >> n;
//     int ans = findFibonacci(n);
//     cout << "output is: " << ans << endl;

//     return 0;
// }
int main(){

    int n, a = 0, b = 1, nextNum=0;
    cout << "Enter n = ";
    cin >> n;
    for (int i = 1; i <= n;i++){
        if(i==1){
            cout << a << ",";
            continue;
        }
        if(i==2){
            cout << b << ",";
            continue;
        }
        nextNum = a + b;
        a = b;
        b = nextNum;
        cout << nextNum << ",";
    }
        return 0;
}