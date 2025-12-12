#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    double a = rand() / (double)RAND_MAX;
    double b = rand() / (double)RAND_MAX;
    double c = rand() / (double)RAND_MAX;
    double d = rand() / (double)RAND_MAX;
    double e = rand() / (double)RAND_MAX;
    cout<<"The 5 random numbers are: "<<a<<","<<b<<","<<c<<","<<d<<","<<e;
    double avg = (a+b+c+d+e) / 5;
    cout<<"The average is = "<<avg;
    double Min = min({a,b,c,d,e});
    double Max = max({a,b,c,d,e});
    cout<<"The minimum is = "<<Min;
    cout<<"The maximum is = "<<Max;
}