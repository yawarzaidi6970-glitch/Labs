#include<iostream>
using namespace std;
int main(){
    long long x;
    cout << "Enter a 9-digit number: ";
    cin >> x;
    int d1 = x / 100000000;
    int d2 = (x / 10000000) % 10;
    int d3 = (x / 1000000) % 10;
    int d4 = (x / 100000) % 10;
    int d5 = (x / 10000) % 10;
    int d6 = (x / 1000) % 10;
    int d7 = (x / 100) % 10;
    int d8 = (x / 10) % 10;
    int d9 = x % 10;
    int checksum = (d1*1 + d2*2 + d3*3 + d4*4 + d5*5 + d6*6 + d7*7 + d8*8 + d9*9) % 11;
    cout << "The 10-digit ISBN is: " << x;
}
