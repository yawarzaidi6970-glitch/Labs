#include<iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter a number: ";
    cin>>num;
    int lastdigit = num % 10;
    lastdigit = lastdigit * 2;
    num = num / 10;
    num = num - lastdigit;

    while(num>=100 || num<=-100){
        int lastdigit = num % 10;
        lastdigit = lastdigit * 2;
        num = num / 10;
        num = num - lastdigit;
    }

    if(num==7 || num==-7 || num==0){
        cout<<num;
        cout<<" is divisible by 7";
    }
    else{
        cout<<num;
        cout<<" is NOT divisible by 7";
    }
}
