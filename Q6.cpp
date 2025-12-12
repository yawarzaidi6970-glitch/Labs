#include<iostream>
using namespace std;
int main(){
    int arr1[5], arr2[5];
    cout<<"Enter 5 marks for array 1: ";
    for(int i=0;i<5;i++){
        cin>>arr1[i];
    }
    cout<<"Enter 5 marks for array 2: ";
    for(int i=0;i<5;i++){
        cin>>arr2[i];
    }
    cout<<"Common numbers: ";
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
            }
        }
    }
}
