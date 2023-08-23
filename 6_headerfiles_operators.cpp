//Two types of header files
//1. System header files: It comes with the compiler
#include<iostream>
//2. User defined header files: It is written by the programmer
#include "file.h"
//file.h is the user defined header file
//cpp reference website to know about header files from compiler

using namespace std;

int main()
{
    int a = 5, b = 10;
    cout<<"Operators in CPP"<<endl; //"endl" for next line
    //Arithmetic Operators    
    cout<<"a-b is "<<a-b<<endl;
    cout<<"a+b is "<<a+b<<endl;
    cout<<"a*b is "<<a*b<<endl;
    cout<<"a/b is "<<a/b<<endl;
    cout<<"a%b is "<<a%b<<endl;

    //Comparison Operator
    cout<<"a==b "<<(a==b)<<endl;
    cout<<"a!=b "<<(a!=b)<<endl;
    cout<<"a<=b "<<(a<=b)<<endl;
    cout<<"a>=b "<<(a>=b)<<endl;
    cout<<"a>b "<<(a>b)<<endl;
    cout<<"a<b "<<(a<b)<<endl;

    /*Logical Operator
    && - and
    || - or
    ! - not
    */
    return 0;
}
