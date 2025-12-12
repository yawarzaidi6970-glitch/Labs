#include<iostream>
using namespace std;
int main(){
    int n = 5;
    float std1_marks[5] = {60, 75, 85, 95, 49};
    float std2_marks[5] = {59, 70, 65, 45, 39};
    float m1 = 0, m2 = 0, cv = 0;
    for(int i=0; i<n; i++){
        m1 = m1 + std1_marks[i];
        m2 = m2 + std2_marks[i];
    }
    m1 = m1 / n;
    m2 = m2 / n;
    for(int i=0; i<n; i++){
        cv = cv + (std1_marks[i] - m1) * (std2_marks[i] - m2);
    }
    cv = cv / (n - 1);
    cout<<"Covariance between marks of both students is: "<<cv;
}
