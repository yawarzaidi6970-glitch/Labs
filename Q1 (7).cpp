#include <iostream>
using namespace std;

int multiplyOne(int A[][10], int B[][10], int i, int j, int k, int c1)
{ 
    if(k == c1)
        return 0;

    return A[i][k] * B[k][j] + multiplyOne(A, B, i, j, k + 1, c1);
}

void fillColumns(int A[][10], int B[][10], int C[][10],
                 int i, int j, int c1, int c2)
{
    if(j == c2)
        return;

    C[i][j] = multiplyOne(A, B, i, j, 0, c1);

    fillColumns(A, B, C, i, j + 1, c1, c2);
}

void fillRows(int A[][10], int B[][10], int C[][10],
              int i, int r1, int c1, int c2)
{
    if(i == r1)
        return;

    fillColumns(A, B, C, i, 0, c1, c2);
    
    fillRows(A, B, C, i + 1, r1, c1, c2);
}

int main()
{
    int r1, c1, r2, c2;
    int A[10][10], B[10][10], C[10][10];

    cout << "Enter rows and columns of A: ";
    cin >> r1 >> c1;

    cout << "Enter rows and columns of B: ";
    cin >> r2 >> c2;

    if(c1 != r2)
    {
        cout << "Matrix multiplication not possible!\n";
        return 0;
    }

    cout << "Enter matrix A:\n";
    for(int i = 0; i < r1; i++)
        for(int j = 0; j < c1; j++)
            cin >> A[i][j];

    cout << "Enter matrix B:\n";
    for(int i = 0; i < r2; i++)
        for(int j = 0; j < c2; j++)
            cin >> B[i][j];

    fillRows(A, B, C, 0, r1, c1, c2);
    cout << "\nResult:\n";
    for(int i = 0; i < r1; i++)
    {
        for(int j = 0; j < c2; j++)
            cout << C[i][j] << " ";
        cout<"\n";
    }
    return 0;
}
