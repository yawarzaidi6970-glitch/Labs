#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter count: ";
    cin>>n;
    vector<int> nums(n);
    cout<<"Enter numbers: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int sum=0;
    for(int i=0;i<n;i++){
        sum += nums[i];
    }
    cout<<"Sum = "<<sum;
}