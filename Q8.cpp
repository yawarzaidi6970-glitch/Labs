#include<iostream>
using namespace std;
int main(){
    int arr[5][9];
    int i,j;
    for(i=0;i<5;i++){
        cout<<"Enter Student ID: ";
        cin>>arr[i][0];
        for(j=1;j<=5;j++){
            cout<<"Enter marks for Course "<<j<<": ";
            cin>>arr[i][j];
        }
        arr[i][6]=500;
        arr[i][7]=arr[i][1]+arr[i][2]+arr[i][3]+arr[i][4]+arr[i][5];
        arr[i][8]=(arr[i][7]*100)/arr[i][6];
    }
    cout<<"Std-id\tC1\tC2\tC3\tC4\tC5\tTotal\tObt\tPer\n";
    for(i=0;i<5;i++){
        for(j=0;j<9;j++){
            cout<<arr[i][j]<<"\t";
        }
        cout<<"\n";
    }
}
