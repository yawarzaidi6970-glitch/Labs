#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int ans;
    srand(time());
    int x = (rand() % 10) + 1;
    int y = (rand() % 10) + 1;
    if(x>y){
        cout<<x<<"x"<<y<<"\n";
    }
    else{
        cout<<y<<"x"<<x<<"\n";
    }
    cout<<"Enter your answer: \n";
    cin>>ans
    if(ans==(x*y)){
        cout<<"Correct \n";
    }
    else{
        cout<<"Wrong \n";
        cout<<"Correct answer is: "<<(x*y);
    }
}
