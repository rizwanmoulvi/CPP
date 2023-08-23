#include <bits/stdc++.h>

using namespace std;

/* Compiler by default supply a 
copy constructor to every object
*/

class Number{
    int num;
    public:
        Number(){
            num = 0;
        }
        Number(int value){
            num = value;
        }
        Number(Number &obj){ //Copy Constructor
            cout<<"Copy Construct Invoked"<<endl;
            num = obj.num;
        }
        void print(){
            cout << "Number is : "<<num<<endl;
        }
}; 

int main(){
    Number n1, n2(5), n3;
    n1.print();
    n2.print();
    Number n5(n2);
    n3.print();
    Number n4 = n1;
    n4.print();
    return 0;
}