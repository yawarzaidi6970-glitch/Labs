#include<iostream>
using namespace std;
int maxSubArray(int arr[], int n, int index, int currentMax, int globalMax) {
    if(index == n)
        return globalMax;
    currentMax = max(arr[index], currentMax + arr[index]);
    if(currentMax > globalMax)
        globalMax = currentMax;
    return maxSubArray(arr, n, index + 1, currentMax, globalMax);
}
int main() {
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[100];
    cout<<"Enter elements: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int result = maxSubArray(arr, n, 0, 0, arr[0]);
    cout<<"Maximum subarray sum = "<<result;
}
