#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int x = max(a,max(b,c));
    int y = min(a,min(b,c));
    int z = ((a+b+c)-x-y);
    cout << x << y << z;
}