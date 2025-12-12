#include <iostream>
using namespace std;
int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    while (num > 0) {
        int i = 0; 
        while (i != num) {
            cout << "CSE141 Exam is in week 09\n";
            i++;
        }
        cout << "Enter a number: ";
        cin >> num;
    }
}
