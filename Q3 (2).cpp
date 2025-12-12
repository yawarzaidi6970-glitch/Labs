#include<iostream>
using namespace std;
int main(){
    int count=0;
    int arr[6];
    for(int i=0; i<6; i++){
        cout<<"Enter a number: ";
        cin>>arr[i];
    }
    if(arr[0]==arr[5]){
        count=count+1;
    }
    if(arr[1]==arr[4]){
        count=count+1;
    }
    if(arr[1]==arr[4]){
        count=count+1;
    }
    if(count==3){
        cout<<"Array is symmetric";
    }
    else {
        cout<<"Array is not symmetric";
    }
}