#include <iostream>
using namespace std;
struct phone {
    int area;
    int exchange;
    int number;
}
int main(){
    phone p1 = {212, 767, 8900};
    phone p2;
    cout<<"Enter area code: ";
    cin>>p2.area;
    cout<<"Enter exchange: ";
    cin>>p2.exchange;
    cout<<"Enter number: ";
    cin>>p2.number;
    cout<<"My number is ("<<p1.area<<") "<<p1.exchange<<"-"<<p1.number<<"\n";
    cout<<"Your number is ("<<p2.area<<") "<<p2.exchange<<"-"<<p2.number<<"\n";
}
