#include <iostream>
using namespace std;
void reverseArray(int *arr, int size) {
    int *left = arr;
    int *right = arr + size - 1;
    while(left < right){
        int temp = *left;
        *left = *right;
        *right = temp;
        left++;
        right--;
    }
}
int main() {
    int size;
    cin >> size;
    int *arr = new int[size];
    for(int i = 0; i < size; i++){
        cin >> *(arr + i);
    }
    reverseArray(arr, size);
    for(int i = 0; i < size; i++){
        cout << *(arr + i) << " ";
    }
}
