#include <bits/stdc++.h>

using namespace std;

/* Characteristics of Constructors
1. Should be in public section
2. We can add anything in Constructor
3. They are invoked automatically when an object is created
4. No return values and do not have return types
5. It can have default arguments
6. We can not refer to their address

*/
class Sum{
    int a,b;
    public:
        void display(void){
            cout<<a<<" "<<b<<endl;
        }
    Sum(void); // Constructor Declaration
};

Sum :: Sum(void){ // Default Constructor with void parameter
    a = 2;
    b = 3;
    cout<<"sum"<<a+b<<endl;
}

int main(){
    Sum s1, s2, s3;
    s1.display();
    s2.display();
    s3.display();
    
    return 0;
}