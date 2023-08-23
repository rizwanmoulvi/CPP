#include <iostream>

using namespace std;

struct car
{
    int year;
    char model;
    float milage;
};

typedef struct employee
{
    int id;
    char name;
    float salary;
} ep;

typedef union money
{
    int rice;
    char car;
    float pounds;
} m;

int main(){
    struct car mustang;
    mustang.year = 1965;
    mustang.model = 's';
    mustang.milage = 19.50;
    cout<<"Mustang Year: "<<mustang.year<<endl;
    cout<<"Mustang Model: "<<mustang.model<<endl;
    cout<<"Mustang Milage: "<<mustang.milage<<endl;

    ep jack;
    jack.id = 1;
    jack.name = 'j';
    jack.salary = 1000;
    cout<<"Jack ID: "<<jack.id<<endl;
    cout<<"Jack Name: "<<jack.name<<endl;
    cout<<"Jack Salary: "<<jack.salary<<endl;

    m india;
    india.rice = 50;
    india.car = 's';
    india.pounds = 15.5;
    cout<<"India Rice: "<<india.rice<<endl;
    cout<<"India Car: "<<india.car<<endl;
    cout<<"India Pounds: "<<india.pounds<<endl;

    enum Days{mon, tue, wed, thu, fri, sat, sun};
    Days d;
    d = mon;
    cout<<"Day: "<<d<<endl;
    d = tue;
    cout<<"Day: "<<d<<endl;

    return 0;
}