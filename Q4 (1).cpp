#include <iostream>
using namespace std;
int main() {
    int num, pnum = 0, nnum = 0, count = 0;
    do {
        cout << "Enter a number: ";
        cin >> num;
        if (num < 15 || num > 25) {
            
            if (num > 99 && num < 201) {
                count = count + 1;
            }
            if (num > 0) {
                pnum = pnum + 1;
            }
            if (num < 0) {
                nnum = nnum + 1;
            }
            if ((num % 2) != 0) {
                cout << "Square of the given number is = " << (num * num)<<"\n";
            }
            break;
        }
    } while (true); 
    cout << "\nPositive numbers count: " << pnum <<"\n";
    cout << "Negative numbers count: " << nnum <<"\n";
    cout << "Numbers between 100 and 200 count: " << count <<"\n";
}
