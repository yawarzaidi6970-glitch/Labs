#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter number of elements: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter numbers: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<"Reversed order: ";
    for(int i=n-1;i>=0;i--){
        cout<<nums[i]<<" ";
    }
}