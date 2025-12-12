#include<iostream>
using namespace std;
int main(){
    double a , b , c;
    a = rand()/RAND_MAX;
    b = rand()/RAND_MAX;
    c = rand()/RAND_MAX;
    cout << a << b << c;
    cout << min(a,min(b,c));
    cout << max(a,max(b,c));
}