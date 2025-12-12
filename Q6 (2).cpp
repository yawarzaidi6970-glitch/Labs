#include <iostream>
using namespace std;
void replaceChar(char *text, char oldC, char newC){
    char *p = text;
    while(*p!='\0'){
        if(*p==oldC){
            *p = newC;
        }
        p++;
    }
}
int main(){
    char text[50];
    cout<<"Enter text: ";
    cin>>text;
    char oldC, newC;
    cout<<"Replace: ";
    cin>>oldC>>newC;
    replaceChar(text, oldC, newC);
    cout<<"Updated: "<<text<<"\n";
}
