#include <iostream>
using namespace std;
int* mergeArrays(int *a, int sizeA, int *b, int sizeB){
    int total = sizeA + sizeB;
    int *m = new int[total];
    for(int i=0;i<sizeA;i++){
        *(m+i) = *(a+i);
    }
    for(int j=0;j<sizeB;j++){
        *(m+sizeA+j) = *(b+j);
    }
    return m;
}
int main(){
    int A[3] = {1,2,3};
    int B[2] = {4,5};
    int *merged = mergeArrays(A,3,B,2);
    cout<<"Merged = ";
    for(int i=0;i<5;i++){
        cout<<*(merged+i)<<" ";
    }
    cout<<"\n";
}
