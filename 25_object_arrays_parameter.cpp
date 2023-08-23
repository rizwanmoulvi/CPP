#include <bits/stdc++.h>

using namespace std;

class Employee{
    int id;
    int salary;
    public:
    void setId(void){
        salary = 1000;
        cout<<"ID"<<endl;
        cin>>id;
    }

    void getId(void){
        cout<<"Id is "<<id<<endl;
    }
};

class complexN{
    int a;
    int b;

    public:
    void setComplexNumber(int v1, int v2){
        a = v1;
        b = v2;
    }
    void setData(complexN o1, complexN o2){
        a = o1.a + o2.a;
        b = o1.b + o2.b; 
    }

    void printNumber(void){
        cout<<a<<" + "<<b<<"i"<<endl;;
    }
};

int main(){
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    complexN c1,c2,c3;

    c1.setComplexNumber(1,2);
    c2.setComplexNumber(4,5);

    c3.setData(c1,c2);
    c3.printNumber();
  
    return 0;
}