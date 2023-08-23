#include <iostream>

using namespace std;

int main(){
    //**********Basic Control Structure*****
    //Sequence Structure
    //Selection Structure
    int age;
    cout<<"Tell me your age"<<endl;
    cin>>age;
    if (age<18)
    {
        cout<<"You cannot come to my party"<<endl;
    }
    else if (age==18)
    {
        cout<<"You are a kid and you will get a kid pass to the party"<<endl;
    }
    else{
        cout<<"You can come to the party"<<endl;
    }
    
    switch (age)
    {
    case 18:
        cout<<"You get a kid pass"<<endl;
        break;
    case 1:
        cout<<"You just born"<<endl;
        break;
    default:
        cout<<"Thank You"<<endl;
        break;
    }

    //Loop Structure
    return 0;
}