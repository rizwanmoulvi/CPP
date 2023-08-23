#include <bits/stdc++.h>

using namespace std;

class Product{
    int a,b;
    public:
        void display(void){
            cout<<"Product of "<<a<<" * "<<b<<" is : "<<a*b<<endl;
        }
    Product(int, int); // Parameterized constructor
};

Product :: Product(int x, int y){
    a = x;
    b = y;
}

int main(){
    Product p1(2,3), p2(4,5); // Implicit call
    p1.display();
    p2.display();
    
    Product p3 = Product(6,7); // Explicit call
    p3.display();
    return 0;
}