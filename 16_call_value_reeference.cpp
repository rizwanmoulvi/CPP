#include <iostream>

using namespace std;

//call by value
int sum(int a, int b){
    int c = a+b;
    return c;
}

//call by reference
void swapPointer(int* a, int* b){ 
    int temp = *a;
    *a = *b;
    *b = temp;
}

//call by reference in c++
void swapPointerCPP(int &a, int &b){ 
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int a = 7, b = 9;
    cout<<"The sum of a+b: "<<sum(a,b)<<endl;
    swapPointer(&a,&b);
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    swapPointerCPP(a,b);
    cout<<"The value of a is: "<<a<<endl;
    cout<<"The value of b is: "<<b<<endl;
    return 0;
}