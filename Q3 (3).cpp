#include<iostream>
using namespace std;
int main(){
    int row, col;
    cout<<"Enter number of rows: ";
    cin>>row;
    cout<<"Enter number of columns: ";
    cin>>col;
    int matrix[10][10]; 
    cout<<"Enter matrix elements: ";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cin>>matrix[i][j];
        }
    }
    cout<<"Your matrix is:\n";
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    int max = matrix[0][0];
    for(int i=0; i<row; i++){
        for(int j=0; j<col; j++){
            if(matrix[i][j] > max){
                max = matrix[i][j];
            }
        }
    }
    cout<<"Maximum element is: "<<max;
}
