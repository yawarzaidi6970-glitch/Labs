#include<iostream>
using namespace std;
int square(int n){
    return n*n;
}
int cube(int n){
    return n*n*n;
}
int main(){
int n;
cout<<"Enter a number: ";
cin>>n;
int result = square(n) + cube(n);
cout<<"Square = "<<square(n)<<", Cube = "<<cube(n)<<", Sum = "<<result;
}
