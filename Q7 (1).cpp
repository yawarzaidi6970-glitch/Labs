#include <iostream>
using namespace std;
int main(){
    int sale[6][4];
    int totalProd[6];
    int totalEmp[4];
    for(int prod=0;prod<6;prod++){
        for(int emp=0;emp<4;emp++){
            cout<<"Enter sales of product "<<prod+1<<" by employee "<<emp+1<<": ";
            cin>>sale[prod][emp];
        }
    }
    for(int prod=0;prod<6;prod++){
        totalProd[prod]=0;
        for(int emp=0;emp<4;emp++){
            totalProd[prod]=totalProd[prod]+sale[prod][emp];
        }
    }
    for(int emp=0;emp<4;emp++){
        totalEmp[emp]=0;
        for(int prod=0;prod<6;prod++){
            totalEmp[emp]=totalEmp[emp]+sale[prod][emp];
        }
    }
    cout<<"Prod\tE1\tE2\tE3\tE4\tTotal\n";
    for(int prod=0;prod<6;prod++){
        cout<<"P"<<prod+1<<"\t";
        for(int emp=0;emp<4;emp++){
            cout<<sale[prod][emp]<<"\t";
        }
        cout<<totalProd[prod]<<"\n";
    }
    cout<<"Tot\t";
    for(int emp=0;emp<4;emp++){
        cout<<totalEmp[emp]<<"\t";
    }
}
