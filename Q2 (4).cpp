#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout<<"Enter rows: ";
    cin>>m;
    cout<<"Enter columns: ";
    cin>>n;
    int arr[10][10];
    int zero=0;
    cout<<"Enter matrix elements: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
            if(arr[i][j]==0){
                zero++;
            }
        }
    }
    cout<<"Matrix is: \n";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<"\n";
    }
    int total = m*n;
    if(zero >= (total/2)){
        cout<<"Matrix is Sparse";
    }
    else{
        cout<<"Matrix is not Sparse";
    }
}
