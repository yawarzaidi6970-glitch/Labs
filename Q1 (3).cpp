#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[50];
    int sum=0, count=0;

    cout<<"Enter the number: ";
    for(int i=0; i<size; i++){
        cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        if(arr[i]>0){
            sum = sum + arr[i];
            count++;
        }
    }

    double avg = 0;
    if(count>0){
        avg = (double)sum / count;
    }

    cout<<"sum is      : "<<sum<<"\n";
    cout<<"Average is  : "<<avg;
}
