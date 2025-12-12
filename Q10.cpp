#include<iostream>
using namespace std;
int main(){
    float length[8]={150.6,354,172.23,73.33,415.15,415.15,415.15,415.15};
    float width[8]={126.9,451.51,75.65,707.17,116.17,116.17,116.17,116.17};
    float area[8];
    int i,largest=0;
    for(i=0;i<8;i++){
        area[i]=length[i]*width[i];
    }
    for(i=1;i<8;i++){
        if(area[i]>area[largest]){
            largest=i;
        }
    }
    cout<<"Plot No\tLength\tWidth\tArea\n";
    for(i=0;i<8;i++){
        cout<<i+1<<"\t"<<length[i]<<"\t"<<width[i]<<"\t"<<area[i]<<"\n";
    }
    cout<<"Largest Land Plot is: "<<largest+1;
}
