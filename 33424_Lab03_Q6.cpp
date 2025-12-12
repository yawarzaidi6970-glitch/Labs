#include<iostream>
using namespace std;
int main(){
    float a,b,c,largest;
    cout<<"please enter values: ";
    cin>>a>>b>>c;
    if(a>b){
        largest=a;
    }
    else if(b>a){
        largest=b;
    }
    if(largest<c){
        largest=c;
    }
    cout<<largest<<" is the largest";
}