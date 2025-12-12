#include<iostream>
using namespace std;
int main(){
    int num,sopho,junior,freeseats,choice,amount;
    freeseats = 500;
    amount = 0;
    cout<<"1. Purchase Ticket \n";
    cout<<"2. Display Information \n";
    cout<<"3. Exit \n";
    cin>>choice;
    while(choice!=3){
        if(choice==1){
            cout<<"How many tickets would you like to buy? \n";
            cin>>num;
            if(num>500){
                cout<<"Sorry, the available seats are 500 \n";
                cout<<"Enter Choice \n";
                cin>>choice;
                while(num>500){
                    cout<<"1. Purchase Ticket \n";
                    cout<<"2. Display Information \n";
                    cout<<"3. Exit \n";
                    cout<<"Enter choice: \n";
                    cin>>choice;
                }
            }
            else{
                cout<<"How many Sopho? \n";
                cin>>sopho;
                freeseats = freeseats - sopho;
                amount = amount+(sopho*100);
                cout<<"How many Juniors? \n";
                cin>>junior;
                freeseats = freeseats - junior;
                amount = amount+(junior*50);
            }
            cout<<"1. Purchase Ticket \n";
            cout<<"2. Display Information \n";
            cout<<"3. Exit \n";
            cout<<"Enter Choice \n";
            cin>>choice;
        }
        else if(choice==2){
            cout<<"Free seats: "<<freeseats<<"\n";
            cout<<"Income: "<<amount<<"\n";
            cout<<"1. Purchase Ticket \n";
            cout<<"2. Display Information \n";
            cout<<"3. Exit \n";
            cout<<"Enter Choice \n";
            cin>>choice;
        }
        else if(choice==3){
            break;
        }
        cout<<"Enter Choice \n";
        cin>>choice;
    }    
}
