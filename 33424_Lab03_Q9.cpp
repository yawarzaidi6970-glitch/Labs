#include<iostream>
using namespace std;
int main(){
    int choice;
    cout<<"Enter "1" for money deposit\n";
    cout<<"Enter "2" for money withdrawal\n";
    cout<<"Enter "3" for money checking balance\n";
    cin>>choice;
    if(choice==1){
        cout<<"Enter the amount you want to deposit: ";
        cin>>amount;
        balance = balance + amount;
    }
    else if(choice==2){
        cout<<"Enter the withdrawal amount: ";
        cin>>amount;
        balance = balance - amount;
    }
    else {
        cout<<"Your balance is: "<<balance
    }

}