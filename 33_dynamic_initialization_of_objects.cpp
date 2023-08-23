#include <bits/stdc++.h>

using namespace std;

class BankDeposit{
    int principle;
    int year;
    float rate;
    int returnValue;
    public:
        BankDeposit(){};
        BankDeposit(int p, int y, float r){
            principle = p;
            year = y;
            rate = r;
            returnValue = principle;
            for ( int i = 0; i < y; i++)
            {
                returnValue = returnValue * (1+rate);
            }
        }
        BankDeposit(int p, int y, int r){
            principle = p;
            year = y;
            rate = float(r)/100;
            returnValue = principle;
            for ( int i = 0; i < y; i++)
            {
                returnValue = returnValue * (1+rate);
            }
        }
        void show(){
            cout<<"Return Value: "<<returnValue<<endl;
        }
};

int main(){
    BankDeposit b1, b2, b3;
    int p, y, r;
    float R;
    cin>>p>>y>>r;

    b1 = BankDeposit(p,y,r);
    b1.show();

    cin>>R;
    b2 = BankDeposit(p,y,R);
    b2.show();
    
    return 0;
}