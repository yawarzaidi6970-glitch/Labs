#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x,y,z;
    cout<<"Enter 3 values: ";
    cin>>x>>y>>z;
    float d = sqrt((x*x)+(y*y)+(z*z));
    cout<<"The Euclidean distance is= "<<d;
}