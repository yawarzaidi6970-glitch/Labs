#include<iostream>
using namespace std;
bool arrayEq(int a[], int b[], int size, int index) {
    if(index == size)
        return true;
    if(a[index] != b[index])
        return false;
    return arrayEq(a, b, size, index + 1);
}

int main() {
    int size;
    cout<<"Enter size of arrays: ";
    cin>>size;
    int arr1[100], arr2[100];
    cout<<"Enter elements of first array: ";
    for(int i=0;i<size;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements of second array: ";
    for(int i=0;i<size;i++){
        cin>>arr2[i];
    }
    if(arrayEq(arr1, arr2, size, 0))
        cout<<"Arrays are equal";
    else
        cout<<"Arrays are not equal";
}