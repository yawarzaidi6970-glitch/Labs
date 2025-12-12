#include<iostream>
using namespace std;
int main(){
    int r[3][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}};;
    int a[3][4] = {{2,5,7,1}, {1,3,6,1}, {5,4,1,3}};
    int b[3][4] = {{1,9,5,0}, {7,1,5,4}, {3,4,2,8}};
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            r[i][j]=a[i][j]+b[i][j];
        }
    }
    for(int i=0; i<3; i++){
        for(int j=0; j<4; j++){
            cout<<r[i][j];
            cout<<" ";
        }
        cout<<"\n";
    }
}