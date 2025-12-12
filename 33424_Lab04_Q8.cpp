#include <iostream>
using namespace std;
int main() {
    int n, qty; 
    int total = 0;
    char choice;
    cout << "Enter number of food types: ";
    cin >> n;
    if (n >= 2 && n <= 4) {
        for (int i = 1; i <= n; i++) {
            cout << "Enter choice (B/F/P/S): ";
            cin >> choice;
            cout << "Enter quantity: ";
            cin >> qty;
            if (choice == 'B' || choice == 'b') {
                total = total + (200 * qty);
            }
            else {
                if (choice == 'F' || choice == 'f') {
                    total = total + (50 * qty);
                }
                else {
                    if (choice == 'P' || choice == 'p') {
                        total = total + (500 * qty);
                    }
                    else {
                        if (choice == 'S' || choice == 's') {
                            total = total + (150 * qty);
                        }
                        else {
                            cout << "Invalid choice";
                        }
                    }
                }
            }
        }
        cout << "Total charges = Rs. " << total;
    }
    else {
        cout << "Invalid number of items.";
    }
}
