#include <iostream>

using namespace std;

int c = 10;

int main(){
    int a, b, c;
    cout<<"Enter the value of a: "<<endl;
    cin>>a;
    cout<<"Enter the value of b: "<<endl;
    cin>>b;
    c = a+b;
    cout<<"The sum is c: "<<c<<endl;
    cout<<"The Global c is: "<<::c<<endl; //"::" scope resolution to specify global variables

//**********float, double, long double literals**********
    float d = 34.4f;
    long double e = 34.4l;
    cout<<"The value of d: "<<d<<endl;
    cout<<"The value of e: "<<e<<endl;
    cout<<"The size of d: "<<sizeof(d)<<endl;

//**********refereence variables*****************
    float x = 455;
    float & y = x;
    cout<<"The value of x: "<<x<<endl;
    cout<<"The value of y: "<<y<<endl;

//**********typecasting*****************
    float i = 45;
    int j = 50;
    cout<<"The value i is:  "<<(int)i<<endl;
    cout<<"The value j is: "<<float(j)<<endl;
    int k = float(j); 

    return 0;
}