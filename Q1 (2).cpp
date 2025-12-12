#include<iostream>
using namespace std;
int main(){
    cout<<"Enter 10 numbers:";
    int arr[10];
    int num,count;
    count = 0;
    for(int i=0; i<10; i++){
        cin>>arr[i];
    }
    cout<<"Enter the number you want to search: ";
    cin>>num;
    for(int j=0; j<10; j++){
        if(arr[j]==num){
            count = count +1;
        }
    }
    if(count==0){
        cout<<“number not found”;
    }        
    cout<<"The number"<<" "<<num<<" was found "<<count<<" times in the array";
}