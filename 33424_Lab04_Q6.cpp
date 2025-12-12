#include <iostream>
using namespace std;

int main() {
    char Type, size;
    int water, sugar, mix1, coffee, milk, mix2;

    cout << "Enter the coffee type: ";
    cin >> Type;
    cout << "Enter D for double, N or normal): ";
    cin >> size;

    if (Type == 'W' || Type == 'w') {
        water = 15; sugar = 15; mix1 = 20; coffee = 2; milk = 4; mix2 = 20;
    }
    else if (Type == 'B' || Type == 'b') {
        water = 20; sugar = 20; mix1 = 25; coffee = 15; milk = 0; mix2 = 25;
    }

    if (size == 'D' || size == 'd') {
        water = water + water/2;
        sugar = sugar + sugar/2;
        mix1 = mix1 + mix1/2;
        coffee = coffee + coffee/2;
        milk = milk + milk/2;
        mix2 = mix2 + mix2/2;
    }

    cout << "Put Water: " << water << " minutes" << endl;
    cout << "Add Sugar: " << sugar << " minutes" << endl;
    cout << "Mix Well: " << mix1 << " minutes" << endl;
    cout << "Add Coffee: " << coffee << " minutes" << endl;
    if (Type == 'W' || Type == 'w') {
        cout << "Add Milk: " << milk << " minutes" << endl;
    }
    cout << "Mix Well: " << mix2 << " minutes" << endl;
}
