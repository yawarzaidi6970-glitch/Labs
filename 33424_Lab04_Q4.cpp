#include<iostream>
using namespace std;
int main(){
    float nts, fsc;

    cout<<"Enter your F.SC percentage: ";
    cin>>fsc;
    cout<<"Enter your NTS percentage: ";
    cin>>nts;

    if(fsc > 70 && nts >= 70){
        cout<<"You are eligible for Oxford University - IT Department";
    }
    else if(fsc > 70 && nts >= 60){
        cout<<"You are eligible for Oxford University- Electronics Department";
    }
    else if(fsc > 70 && nts >= 50){
        cout<<"You are eligible for Oxford University - Telecommunication Department";
    }

    else if(fsc >= 60 && fsc <= 70 && nts >= 50){
        cout<<"You are eligible for MIT - IT Department";
    }
    else if(fsc >= 50 && fsc <= 59 && nts >= 50){
        cout<<"You are eligible for MIT - Chemical Department";
    }
    else if(fsc > 40 && fsc < 50 && nts >= 50){
        cout<<"You are eligible for MIT - Computer Department";
    }
    else{
        cout<<"You don't qualify";
    }
}
