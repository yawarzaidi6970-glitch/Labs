#include<iostream>
using namespace std;
int main(){
    int a , b, c;
    cin >> a >> b >> c;
    int x = max(a,b,c);
    cout << "Largest number is: " << x;
}