#include <iostream>
using namespace std;
int main() {
    float *p = new float;
    cin >> *p;
    cout << "Value = " << *p <<"\n";
    cout << "Address = " << p <<"\n";
    *p = *p + 10;
    cout << "Updated Value = " << *p <<"\n";
    delete p;
}
