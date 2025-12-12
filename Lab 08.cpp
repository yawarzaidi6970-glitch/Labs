#include<iostream>
#include<climits>
using namespace std;
int main(){
    int count;
    int num;
    int max = INT_MIN;
    int min = INT_MAX;
    cout<<"Enter the count of numbers you want to enter: ""\n";
    cin>>count;
    for(int i=1; i<=count; i++){
        cout<<"Enter number: ""\n";
        cin>>num;
        
        if(num>max){
            max = num;
        }
        if(num<min){
            min=num;
        }
    }
    cout<<"Max="<<max<<"\n";
    cout<<"Min="<<min<<"\n";
}