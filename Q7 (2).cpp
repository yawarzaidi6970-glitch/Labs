#include<iostream>
using namespace std;
int main(){
    int n;
    char c;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"Enter a character: ";
    cin>>c;
    for(int i=0; i<n; i++){
        cout<<c;
    }
}