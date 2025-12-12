#include <iostream>
#include <string>
using namespace std;
bool isSubsequence(string s1, string s2, int i, int j){
    if(i == s1.length()) return true;
    if(j == s2.length()) return false;
    if(s1[i] == s2[j]) return isSubsequence(s1, s2, i+1, j+1);
    return isSubsequence(s1, s2, i, j+1);
}
int main(){
    string a,b;
    cin >> a >> b;
    if(isSubsequence(a,b,0,0)) cout<<"true";
    else cout<<"false";
}
