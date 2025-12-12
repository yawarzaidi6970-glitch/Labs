#include <iostream>
using namespace std;
int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[100]; 
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int *p = arr;
    int maxVal = *p;
    for(int i = 1; i < n; i++){
        if(*(p + i) > maxVal){
            maxVal = *(p + i);
        }
    }
    cout << "Maximum = " << maxVal;
}
