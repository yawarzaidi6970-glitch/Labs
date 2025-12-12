#include<iostream>
using namespace std;
int main(){
    float cal, fat, fatcal, fatper;
    cout<<"Enter the calories: ";
    cin>>cal;
    cout<<"Enter the fat grams: ";
    cin>>fat;

    while(cal<=0 || fat<0){
        cout<<"Enter correct value.";
        cout<<"Enter the calories: ";
        cin>>cal;
        cout<<"Enter the fat grams: ";
        cin>>fat;
    }

    fatcal = fat * 9;
    if(fatcal > cal){
        cout<<"Enter valid fat calories: ";
    }
    else{
        fatper = (fatcal / cal) * 100;
        cout<<"Calories from fat are: "<<fatcal;
        cout<<"There is "<<fatper<<"% calories from fat grams";

        if(fatper < 30){
            cout<<"Your food is low in fat.";
        }
    }
}
