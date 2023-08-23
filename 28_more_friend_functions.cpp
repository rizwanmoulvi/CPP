#include <bits/stdc++.h>

using namespace std;

class Y; // Forward Declaration

class X{
    int data1;
    public:
        void setValue(int value){
            data1 = value;
        }
        void display(){
            cout<<data1<<endl;
        }
    friend void add(X,Y);
    friend void swap(X &, Y &);
};

class Y{
    int data2;
    public:
        void setValue(int value){
            data2 = value;
        }
        void display(){
            cout<<data2<<endl;
        }
    friend void add(X, Y);
    friend void swap(X &, Y &);
};

void add(X o1, Y o2){
    cout<<o1.data1+o2.data2<<endl;
}

void swap(X &o1, Y &o2){
    int temp = o1.data1;
    o1.data1 = o2.data2;
    o2.data2 = temp;
}

int main(){
    X o1;
    o1.setValue(5);

    Y o2;
    o2.setValue(7);
    
    add(o1,o2);
    cout<<"Before Swap"<<endl;
    o1.display();
    o2.display();
    swap(o1,o2);
    cout<<"After Swap"<<endl;
    o1.display();
    o2.display();
    return 0;
}