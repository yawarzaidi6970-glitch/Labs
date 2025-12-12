#include<iostream>
#include<ctime>
using namespace std;
int main(){
    double arr[10];
    srand(time(0));
    double sum=0;
    for(int i=0;i<10;i++){
    arr[i] = (double)rand() / RAND_MAX;  
    sum = sum + arr[i];
    }
    for(int i=0;i<10;i++){
        cout<<"Elements are: ";
        cout<<arr[i]<<"\n";
    }
    cout<<"\n";
    cout<<"Sum = "<<sum;
    cout<<"\n";
    cout<<"Average = "<<sum/10;
}
