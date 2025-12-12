#include<iostream>
using namespace std;
void sumofcubes(int num){
    int sum=0;
    for(int i=0; i<=num; i++){
        sum = sum +(i*i*i);            
    }
    cout<<sum;
}
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    sumofcubes(num);
}