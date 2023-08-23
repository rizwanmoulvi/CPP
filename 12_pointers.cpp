#include <iostream>

using namespace std;

int main(){
    int a = 5;
    int* b = &a;
    int** c =&b;
    cout<<"The address of a is: "<<&a<<endl;
    cout<<"The address of b is: "<<&b<<endl;
    cout<<"The value of b is: "<<*b<<endl;
    cout<<"The value at b is: "<<**c<<endl;
    *b = 10;
    cout<<a;
    return 0;
}