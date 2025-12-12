#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(string x, int l, int r){
    if(l >= r) return true;
    if(x[l] != x[r]) return false;
    return isPalindrome(x, l+1, r-1);
}

int main(){
    string x;
    cin >> x;
    if(isPalindrome(x, 0, x.length()-1)) cout<<"Palindrome";
    else cout<<"Not palindrome";
}
