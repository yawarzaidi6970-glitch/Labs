#include<iostream>
using namespace std;
int main(){
    int a , b;
    cout<<"Enter 2 integers: ";
    cin>>a>>b;
    int sum = a + b;
    int product = a * b;
    cout<<"Sum is="<<sum<<","<<"Product is="<<product<<",";
    if(sum%product==0){
        cout<<"Divisible";
    }
    else{
        cout<<"Not Divisible";
    }
}