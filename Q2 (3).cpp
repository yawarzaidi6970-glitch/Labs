#include<iostream>
using namespace std;
int main(){
    double arr[6];
    double temp;
    for(int i=0; i<6; i++){
        cout<<"Enter num: ";
        cin>>arr[i];
    }
    for(int j=0;j<6; j++){
        for(int x=0;x<6;x++){
            if(arr[x]<arr[x+1]){
                temp=arr[x+1];
                arr[x+1]=arr[x];
                arr[x]=temp;
            }
        }
    }
    for(int n=0; n<6; n++){
        cout<<arr[n]<<"\n";    
    }
}