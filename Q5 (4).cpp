#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
void showBoard(int board[4][4], bool revealed[4][4]) {
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(revealed[i][j])
                cout<<board[i][j]<<" ";
            else
                cout<<"* ";
        }
        cout<<endl;
    }
}
bool allRevealed(bool revealed[4][4]) {
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if(!revealed[i][j])
                return false;
        }
    }
    return true;
}
int main() {
    srand(time(0));
    int cards[16];
    for(int i=0;i<8;i++){
        cards[2*i] = i+1;
        cards[2*i+1] = i+1;
    }
    for(int i=0;i<16;i++){
        int j = rand()%16;
        int temp = cards[i];
        cards[i] = cards[j];
        cards[j] = temp;
    }
    int board[4][4];
    bool revealed[4][4] = {false};
    int k=0;
    for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            board[i][j] = cards[k++];
        }
    }
    cout<<"Memory Matching Game (4x4)"<<"\n";
    while(!allRevealed(revealed)) {
        showBoard(board, revealed);
        int r1,c1,r2,c2;
        cout<<"Enter row and column of first card (0-3 0-3): ";
        cin>>r1>>c1;
        cout<<"Enter row and column of second card (0-3 0-3): ";
        cin>>r2>>c2;
        if(revealed[r1][c1] || revealed[r2][c2]) {
            cout<<"One of these cards is already matched."<<"\n";
            continue;
        }
        cout<<"You selected: "<<board[r1][c1]<<" and "<<board[r2][c2]<<endl;
        if(board[r1][c1] == board[r2][c2]) {
            cout<<"It's a match!"<<"\n";
            revealed[r1][c1] = true;
            revealed[r2][c2] = true;
        } else {
            cout<<"Not a match.\n";
        }
    }
    cout<<"Congratulations! All cards matched!"<<"\n";
}