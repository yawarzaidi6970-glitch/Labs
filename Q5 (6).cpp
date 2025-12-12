#include <iostream>
using namespace std;

int findRecursive(int arr[], int size, int index, int target){
    if(index == size) return -1;
    if(arr[index] == target) return index;
    return findRecursive(arr, size, index+1, target);
}
int main(){
    int arr[10] = {5,4,3,2,1,6,10,9,7,8};
    int target;
    cin >> target;
    int i = findRecursive(arr, 10, 0, target);
    if(i == -1) cout<<"Not found";
    else cout<<"Element found at index "<<i;
}
