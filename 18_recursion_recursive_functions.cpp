#include <iostream>

using namespace std;

int factorial(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return x*factorial(x-1); //n! = n*(n-1) = 5*4*3*2*1
    }
}

int fibonacci(int x){
    if(x==0 || x==1){
        return 1;
    }
    else{
        return fibonacci(x-2)+fibonacci(x-1);
    }
}

int main(){
    int a;
    cout<<"Enter the number: "<<endl;
    cin>>a;
    cout<<"The factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"The fibonacci series"<<endl;
    cout<<fibonacci(a)<<endl;   
    return 0;
}