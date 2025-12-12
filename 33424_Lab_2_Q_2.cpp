#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int a, b;
    cout << "Enter 2 values: ";
    cin >> a >> b;
    double d = sqrt(pow(a-0,2)+pow(b-0,2));
    cout << "Euclidean Distance = " << d;
}