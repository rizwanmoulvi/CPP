#include <bits/stdc++.h>

using namespace std;

class Employee
{
    int id;
    static int count; //count is the static data member of the class Employee

public:
    void setData(void)
    {
        cout << "Enter the Id " << endl;
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "ID of this employee is " << id << " Employee Number " << count << endl;
    }

    static void getCount(void){
        cout<<"Total number of employees are "<<count<<endl;
    }
};

int Employee ::count;

int main()
{
    Employee Jhon, Max, Don;
    Jhon.setData();
    Jhon.getData();

    Max.setData();
    Max.getData();

    Don.setData();
    Don.getData();
    
    Employee::getCount();//calling a static function using object name
    return 0;
}