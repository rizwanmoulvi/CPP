#include <bits/stdc++.h>

using namespace std;

class Patient
{
    public:
        string name, city;
        int age,zip;
        void setData(string problem, string blood, int phone);
        void getData();
    
    private:
        string problem, blood;
        int phone; 
};

int main(){
    Patient Jhon;
    Jhon.name = "Jhon";
    Jhon.city = "New York";
    Jhon.age = 40;
    Jhon.zip = 155241;
    Jhon.setData("AIDS","B+",9192);
    Jhon.getData();
    

    return 0;
}

void Patient :: setData(string problem_in , string blood_in, int phone_in){
    problem = problem_in;
    blood = blood_in;
    phone = phone_in;
}

void Patient :: getData(){
    cout<<"Health Problem : "<<problem<<endl;
    cout<<"Blood Group : "<<blood<<endl;
    cout<<"Phone Number : "<<phone<<endl;
}
