#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    int *arr = new int[n];
    for(int i = 0; i < n; i++){
        cin >> *(arr + i);
    }
    int *maxPtr = arr;
    for(int i = 1; i < n; i++){
        if(*(arr + i) > *maxPtr){
            maxPtr = arr + i;
        }
    }
    cout << "Maximum = " << *maxPtr;
}
