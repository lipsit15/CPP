#include <iostream>
using namespace std;

int main(){
    int a[10], n, i;
    cout << "Enter the n to convert = ";
    cin >> n;
    for (i = 0; n > 0;i++){
        a[i] = n % 2;
        n = n / 2;
    }
    cout << "Binary number is = ";
    for (i = i - 1; i >= 0;i--){
        cout << a[i] << "";
    }
    cout << endl;
    return 0;
}

/*
// Decimal to Binary
#include <iostream>
#include<math.h>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;
    int ans = 0;
    int i = 0;
    while(n!=0){
        int bit = n & 1;
        ans = (bit * pow(10, i)) + ans;
        n = n >> 1;
        i++;
    }
    cout << "The ans is " << ans << endl;

    return 0;
}
*/