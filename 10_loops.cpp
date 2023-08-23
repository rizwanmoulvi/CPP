#include <iostream>

using namespace std;

int main()
{
    /*
    1.For Loop
    2.While Loop
    3.Do While Loop
    */
    cout << "For Loop" << endl;
    int i;
    for (i = 10; i > 0; i--)
    {
        cout << i << endl;
    }
    cout << "While Loop" << endl;
    int j = 0;
    while (j < 10)
    {
        cout << j << endl;
        j++;
    }

    cout << "Do While Loop" << endl; 
    int k = 0;
    do
    {
        cout<<k<<endl;
        k++;
    } while (k<10);
    

    return 0;
}