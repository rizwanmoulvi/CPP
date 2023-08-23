#include <iostream>
#include <iomanip> //"setw" fnction

using namespace std;

int main(){
    //constants
    const int z = 7;
    cout<<z;

    //****************manipultars**************
    /*"endl" is a manipulators
    takes cursor to the next line
    */
    /*"setw" reserves number of character to be shown 
    aligns characters from right side
    */
   int a = 9, b = 99, c = 999, d = 9999;
   cout<<"The value of a without setw: "<<a<<endl;
   cout<<"The value of b without setw: "<<b<<endl;
   cout<<"The value of c without setw: "<<c<<endl;
   cout<<"The value of d without setw: "<<d<<endl;
   
   cout<<"The value of a with setw: "<<setw(4)<<a<<endl;
   cout<<"The value of b with setw: "<<setw(4)<<b<<endl;
   cout<<"The value of c with setw: "<<setw(4)<<c<<endl;
   cout<<"The value of d with setw: "<<setw(4)<<d<<endl;

   //*******Operator Precedence************
    //refer to table
    //precedence and associativity

    return 0;
}