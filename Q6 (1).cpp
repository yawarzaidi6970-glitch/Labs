#include<iostream>
using namespace std;
void volumeCalc(double a, double h){
    double volume = (a * a * h) / 3;
    cout<<"Volume = "<<volume;
}
void getData(){
    double a,h;
    cout<<"Enter base (a): ";
    cin>>a;
    cout<<"Enter height (h): ";
    cin>>h;
    volumeCalc(a,h);
}
int main(){
    getData();
}
