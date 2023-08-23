#include <iostream>

using namespace std;

int main(){
    int n;
    cout<<"Enter The Number Of Elements"<<endl;
    cin>>n;
    int marks[n] = {};
    for (int i = 0; i < n; i++)
    {
        int x;
        cout<<"Enter Element: "<<i<<endl;
        cin>>x;
        marks[i] = x;
    }
    
    int len = sizeof(marks)/sizeof(marks[0]);
    for (int i = 0; i < len; i++)
    {
        cout<<"The element "<<i<<" : "<<marks[i]<<endl;
    }
    
    return 0;
}