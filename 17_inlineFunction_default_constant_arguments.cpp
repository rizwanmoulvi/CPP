#include <iostream>

using namespace std;

inline int product(int a, int b){
    return a*b;
}

int moneyRecieved(int principle, float factor = 0.4){ // "factor" is default argument 
    return principle*factor;
}

float areaCircle(float r, const float pi = 3.14){
    return pi*r*r;
}

int main(){
    int x, y;
    cout<<"Enter the values of x & y"<<endl;
    cin>>x>>y;
    cout<<product(x,y)<<endl;
    cout<<product(x,y)<<endl;
    cout<<product(x,y)<<endl;
    cout<<product(x,y)<<endl;
    cout<<product(x,y)<<endl;

    int money = 100;;
    cout<<"Capital for "<<money<<" Invested: "<<moneyRecieved(money)<<endl;

    float r;
    cout<<"Enter The radius of circle: "<<endl;
    cin>>r;
    cout<<"The area of cirlce is: "<<areaCircle(r)<<endl;

    return 0;
}