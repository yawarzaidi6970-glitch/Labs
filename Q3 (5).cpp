#include <iostream>
#include <string>
using namespace std;
int main() {
    string str1, str2;
    cout << "Enter first string: ";
    cin >> str1;
    cout << "Enter second string: ";
    cin >> str2;
    if (str1 == str2) {
        cout << "Both strings are equal." << endl;
    } else if (str1 > str2) {
        cout<<str1<<" is greater"<<"\n";
    } else {
        cout<<str2<<" is greater"<<"\n";
    }
}
