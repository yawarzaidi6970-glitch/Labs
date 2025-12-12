#include<iostream>
using namespace std;
int main(){
    int i=0;
    int j=0;
    int sum1=0;
    int sum2=0;
    double num;
    double pm[10];
    double fm[10];
    double avg1;
    double avg2;
    cout<<"Enter 10 numbers: \n";
    for(int x=0; x<10; x++){
        cin>>num;
        if(num>=5){
            pm[i]=num;
            sum1 = sum1 + num;
            i=i+1;
        }
        else{
            fm[j]=num;
            sum2 = sum2 + num;
            j=j+1;
        }
    }
    cout<<"Array 1 values are: ";
    for(int z=0; z<i; z++){
        cout<<pm[z]<<" ";
    }
    cout<<"\n";
    cout<<"Array 2 values are: ";
    for(int y=0; y<j; y++){
        cout<<fm[y]<<" ";
    }
    cout<<"\n";
    if(i>0){
        avg1 = sum1/i;
        cout<<"Average of Array 1 is: "<<avg1<<"\n";
    }
    if(j>0){
        avg2 = sum2/j;
        cout<<"Average of Array 2 is: "<<avg2<<"\n";
    }
    cout<<"Pass: "<<i<<"\n";
    cout<<"Fail: "<<j<<"\n";
}
