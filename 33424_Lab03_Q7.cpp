#include<iostream>
using namespace std;
int main(){
    double a,b,c,d,e;
    cout<<"Enter marks of 5 subjects: ";
    cin>>a>>b>>c>>d>>e;
    float avg = (a+b+c+d+e)/5;
    if(avg>=90){
        cout<<"A";
    }
    else if(avg>=80 && avg<=89){
        cout<<"B";
    }
    else if(avg>=70 && avg<=79){
        cout<<"C";
    }
    else {
        cout<<"Fail";
    }
}