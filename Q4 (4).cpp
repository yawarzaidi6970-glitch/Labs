#include<iostream>
using namespace std;
void jobSelect(int marks, int exp){
    if(marks>=50 && marks<60){
        cout<<"Selected as Trainee Engineer";
    }
    else if(marks>=60 && marks<70 && exp>=1){
        cout<<"Selected as Assistant Developer";
    }
    else if(marks>=70 && exp>=2){
        cout<<"Selected as Associate Developer";
    }
}
int main(){
    int marks,exp;
    cout<<"Enter marks: ";
    cin>>marks;
    cout<<"Enter experience: ";
    cin>>exp;
    jobSelect(marks,exp);
}