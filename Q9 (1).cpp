#include<iostream>
#include<cmath>
using namespace std;
double power(double a, int b){
    return pow(a,b);
}
int main(){
    double a;
    int b;
    cout<<"Enter base (a): ";
    cin>>a;
    cout<<"Enter exponent (b): ";
    cin>>b;
    cout<<"Result = "<<power(a,b);
}