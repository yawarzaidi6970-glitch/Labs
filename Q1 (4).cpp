#include <iostream>
#include <string>
using namespace std;
int main() {
    string firstname, lastname, full;
    cout << "Enter your first name: ";
    cin >> firstname;
    cout << "Enter your last name: ";
    cin >> lastname;
    full = firstname + " " + lastname;
    for (int i = full.length() - 1; i >= 0; i--) {
        cout<<full[i];
    }
    cout<<"\n";
}
