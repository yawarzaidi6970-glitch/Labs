#include<iostream>
using namespace std;

void swapPointers(int * &a, int * &b) {
    int *temp = a;
    a = b;
    b = temp;
}
int main() {
    int x = 5;
    int y = 10;
    int *a = &x;
    int *b = &y;
    cout<<*a<<" "<<*b<<"\n";
    cout<<a<<"="<<*a<<"    "<<b<<"="<<*b<<"\n";
    swapPointers(a, b);
    cout<<*a<<" "<<*b<<endl;
    cout<<a<<"="<<*a<<"    "<<b<<"="<<*b<<"\n";
}