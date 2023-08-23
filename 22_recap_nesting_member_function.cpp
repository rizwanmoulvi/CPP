#include <bits/stdc++.h>

using namespace std;

class binary
{
    private:
        int s = 2; //Properties are by-default private
        void convert(void);
    public:
        void check(void); 
};

void binary :: check(void){
    if (s == 0){
        convert();
    }
    else{
        cout<<"sorry"<<endl;
    };
}

void binary :: convert(void){
    cout<<1<<endl;
}


int main(){
    binary z;
    z.check();
    return 0;
}