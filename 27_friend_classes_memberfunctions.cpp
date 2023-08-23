#include <bits/stdc++.h>

using namespace std;

//forward declaration
class sum;

class Product{
    public:
        int productNumber(int a , int b){
            return (a+b);
        }
        int newproduct(sum, sum);
        int newCproduct(sum, sum);
};

class sum{
    int a, b;
    friend class Product;
    public:
        void setNumber(int x, int y){
            a = x;
            b = y;
        }
        void printNumber(){
            cout<<a<<" "<<b<<endl; 
        }
    //friend int Product :: newproduct(sum, sum);
    //friend int Product :: newCproduct(sum, sum);
};

int Product :: newproduct(sum o1, sum o2){
    return(o1.a * o2.a);
};

int Product :: newCproduct(sum o1, sum o2){
    return(o1.b * o2.b);
};

int main(){
    sum s1, s2;
    s1.setNumber(2,3);
    s1.printNumber();
    s2.setNumber(4,5);
    s2.printNumber();
    Product p1;
    int res = p1.newproduct(s1,s2);
    cout<<res<<endl;
    int pro = p1.newCproduct(s1,s2);
    cout<<pro<<endl;
    return 0;
}