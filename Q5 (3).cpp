#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int n;
    cout<<"Enter count: ";
    cin>>n;
    int arr[n];
    srand(time(0));
    cout<<"Generated numbers -> ";
    for(int i=0;i<n;i++){
        arr[i]=rand()%11;
        cout<<arr[i]<<" ";
    }
    cout<<"\n";
    int count[11]={0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    }
    for(int i=0;i<=10;i++){
        if(count[i]>0){
            cout<<i<<" -> "<<count[i]<<" time";
            if(count[i]>1) cout<<"s";
            cout<<"\n";
        }
    }
}
