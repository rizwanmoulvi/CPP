#include <iostream>

using namespace std;

int sum(int, int);
void greet(void);

int main(){
    greet();
    int x = 5;
    int y = 7;
    cout<<"The sum of x+y is : "<<sum(x,y)<<endl; //x and y are actual parameters
    
    return 0;
}

int sum(int a, int b){ //a and b are formal parameters
    int c = a+b;
    return c;
}

void greet(){
    cout<<"Good Morning"<<endl;
}