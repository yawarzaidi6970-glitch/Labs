#include <iostream>
using namespace std;

float sumAll(float *arr, int size){
    float sum = 0;
    for(int i = 0; i < size; i++){
        sum = sum + *(arr + i);
    }
    return sum;
}
int main(){
    float arr[] = {4.5, 3.3, 0.5, 4.57};
    cout << sumAll(arr, 4);
}
