#include <iostream>
#include <string>
using namespace std;
int main(){
    string names[5] = {"Ali", "Zuhair", "Faisal", "Maaz", "Anis"};
    string temp;
    for(int i=0;i<4;i++){
        int minIndex = i;
        for(int j=i+1;j<5;j++){
            if(names[j] < names[minIndex]){
                minIndex = j;
            }
        }
        temp = names[i];
        names[i] = names[minIndex];
        names[minIndex] = temp;
    }
    cout << "Names in alphabetical order (Selection Sort): ";
    for(int i=0;i<5;i++){
        cout << names[i] << " ";
    }
}
