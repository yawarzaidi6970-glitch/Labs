#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;
    int a[10][10], t[10][10];
    cout << "Enter elements of matrix:\n";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> a[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            t[i][j] = a[j][i];
        }
    }
    int same = 1;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(a[i][j] != t[i][j]){
                same = 0;
            }
        }
    }
    if(same == 1)
        cout << "Matrix is symmetric";
    else
        cout << "Matrix is asymmetric";
}