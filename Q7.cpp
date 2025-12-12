#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter number: ";
    cin>>num;
    while(num>=10){
        int sum=0;
        while(num>0){
            sum = sum + (num%10);
            num = num/10;
        }
        num = sum;
    }
    cout<<"Single digit = "<<num;
}
