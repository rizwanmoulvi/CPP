#include <bits/stdc++.h>

using namespace std;

class Num{
    int n;
    public:
        Num(){
            n = 5;
            cout<<"object created"<<endl;
        }
        ~Num(){
            cout<<"Object destroyed"<<endl;
        }
        void display(){
            cout<<n;
        }
};

int main(){
    Num n1, n2;
    n1.display();
    {
        Num n3;
    }
    return 0;
}