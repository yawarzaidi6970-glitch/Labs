#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
    int arr[10];
    char num[15];
    int i;
    srand(time(0));
    for(i=0;i<10;i++){
        arr[i]=rand()%10;
    }
    num[0]='+';
    num[1]='9';
    num[2]='2';
    for(i=0;i<10;i++){
        num[i+3]=arr[i]+'0';
    }
    num[13]='\0';
    cout<<"Generated Cell Number: "<<num;
}
