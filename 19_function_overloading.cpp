#include <iostream>

using namespace std;

/*same name functions can work and differentiated 
by the program based on number of arguments given 
in actual parameters and formal parameters

*/

//Volume of cube
int volume(int side){
    cout<<"The volume of cube is"<<endl;
    return(side*side*side);
}

//Volume of cylinder
int volume(int radius, int height, float pi=3.14){
    cout<<"The volume of cylinder is"<<endl;
    return(pi*radius*radius*height);
}

//Volume of cuboid
int volume(int l, int b, int w){
    cout<<"The volume of cuboid is"<<endl;
    return(l*b*w);
}

int main(){
    char name[10];
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Hello, "<<name<<endl;
    cout<<volume(10)<<endl;
    cout<<volume(5,10)<<endl;
    cout<<volume(5,10,15)<<endl;
    return 0;
}