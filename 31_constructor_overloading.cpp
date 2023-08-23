#include <bits/stdc++.h>

using namespace std;

class Product{
    int a, b;
    public:
        Product(int x, int y){
            a = x;
            b = y;
        }

        Product(void){
            a = 0;
            b = 0;
        }
        Product(int x){
            a = x;
            b = 0;
        }
        void display(void){
            cout<<a<<" "<<b<<endl;
        }
};

int main(){
    Product p2(1,3), p3(4), p4;
    p4.display();
    p2.display();
    p3.display();
    return 0;
}