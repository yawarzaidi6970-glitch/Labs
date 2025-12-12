#include <iostream>
using namespace std;

int main() {
    char weekday, vacation;
    cout << "Is it a weekday? (Yes:Y/No:N): ";
    cin >> weekday;
    cout << "Are we on vacation? (Yes:Y/No:N): ";
    cin >> vacation;

    if (weekday == 'N' || weekday == 'n') {
        cout << "true";
    }
    else if (vacation == 'Y' || vacation == 'y') {
        cout << "true";
    }
    else {
        cout << "false";
    }
}
