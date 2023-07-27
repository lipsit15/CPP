#include <iostream>
using namespace std;

bool checkPalindrome(string s){
    int n = s.size();
    int i = 0;
    int j = n - 1;
    while(i<j){
        if(s[i]!=s[j]){
            return 0;
        }
        else{
            i++;
            j--;
        }
    }
    return 1;
}


int main(){
    string s;
    getline(cin, s);
    cout<<"output is: "<<checkPalindrome(s)<<endl;;
    return 0;
}